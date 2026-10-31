# 📐 Arquitectura Técnica de la ROM de *Dragon Ball Z: Buu's Fury (USA)*

Este documento detalla la estructura binaria exacta de la ROM retail estadounidense de ***Dragon Ball Z: Buu's Fury*** (`SHA-1: f1c4b07554d2a3b1ad2f325307051e775ce68087`, `8,388,608` bytes, cargada en el espacio de direcciones GBA `0x08000000..0x087FFFFF`) utilizada por **DBZ: Buu's Fury Studio** (`editor/server.py`).

---

## 1. Mapa General de Direcciones de la ROM

| Rango (Offset Archivo) | Dirección GBA (`0x08...`) | Contenido / Familia | Cantidad |
| :--- | :--- | :--- | :--- |
| `0x000000..0x0554BF` | `0x08000000..0x080554BF` | Código ejecutable ARM7TDMI / Thumb del motor Webfoot | ~2,900 funciones |
| `0x0554C0..0x05553C` | `0x080554C0..0x0805553C` | Tabla de despacho del intérprete de scripts (`31` opcodes) | 31 handlers |
| `0x05632C..0x05652B` | `0x0805632C..0x0805652B` | Paleta maestra de fondos (`bg.pal`, 256 colores BGR555) | 512 bytes |
| `0x05652C..0x05672B` | `0x0805652C..0x0805672B` | Paleta maestra de sprites OAM (`sprite.pal`, 256 colores BGR555) | 512 bytes |
| `0x05792C..0x06D4E0` | `0x0805792C..0x0806D4E0` | Pool de textos y diálogos en formato `UTF-16LE` | 1,524 cadenas |
| `0x08E2E0..0x0945BF` | `0x0808E2E0..0x080945BF` | Tabla principal de mapas (`map_entry_table`, `0x38` bytes c/u) | 452 mapas |
| `0x0945C0..0x179763` | `0x080945C0..0x08179763` | Bloque de 187 contenedores `webfoot_lz` de gráficos de tiles (`Tilebanks`) | 187 bancos |
| `0x179764..0x179A4F` | `0x08179764..0x08179A4F` | Tabla de punteros a los 187 `Tilebanks` (`187 × u32`) | 187 punteros |
| `0x179A50..0x2B8BC8` | `0x08179A50..0x082B8BC8` | Bloque de mapas (`root_record`, capas `BG0..BG3`, colisiones, warps y chunks `webfoot_lz`) | 427 roots / 5,069 chunks |
| `0x3C34D0..0x6A88AC` | `0x083C34D0..0x086A88AC` | Bloque de contenedores `webfoot_lz` de gráficos de sprites OAM (8bpp) | 7,390 contenedores |
| `0x6A89D0..0x6B6BDB` | `0x086A89D0..0x086B6BDB` | Registros de definiciones de sprites, animaciones y frames OAM | 297 defs / 10,980 frames |
| `0x6B6BDC..0x6B707F` | `0x086B6BDC..0x086B707F` | Tabla índice de punteros a `sprite_definition` (`297 × u32`) | 297 sprites |
| `0x6B7E8C..0x7B79A4` | `0x086B7E8C..0x087B79A4` | Bloque `endrom`: nodos de IA (`2,505`), estadísticas de enemigos (`150`), eventos (`522`) | 4,324 registros |
| `0x711274..0x712CCC` | `0x08711274..0x08712CCC` | Tabla de estadísticas de enemigos (`enemy_stat_record`, `0x1C` bytes c/u) | 150 enemigos |
| `0x77C5A4..0x79B704` | `0x0877C5A4..0x0879B704` | Pool de registros de eventos y diálogos (`event_pool_record`) | 522 eventos |
| `0x79B704..0x79BF2C` | `0x0879B704..0x0879BF2C` | Tabla índice de punteros a `event_pool_record` (`522 × u32`) | 522 punteros |
| `0x7B89B0..0x7FFFFF` | `0x087B89B0..0x087FFFFF` | Región de expansión utilizada por el editor para nuevos eventos/entidades/chunks | ~292 KB (+expansión) |

---

## 2. Estructura de Mapas (`map_entry_table` y `root_record`)

### 2.1. Entrada de Mapa (`MapEntry`, `0x38` = 56 bytes en `0x08E2E0 + id * 0x38`)
Se desempaqueta con `struct.unpack("<12B11I", data)` (`12` bytes de cabecera seguidos de `11` punteros/palabras de 32 bits):
- `fields[0]` (`+0x00`, `u8`): Flags iniciales.
- `fields[1]` (`+0x01`, `u8`): ID de grupo / capítulo del mapa.
- `fields[2]` (`+0x02`, `u8`): Índice (base 1) de la ranura activa dentro del arreglo de `root_record` en `fields[20]`.
- `fields[3]` (`+0x03`, `u8`): Cantidad de **Zonas Trigger de Script** apuntadas por `fields[13]` (`+0x10`).
- `fields[4]` (`+0x04`, `u8`): Cantidad de **Entidades / Colocaciones (`PlacementRecord` / `SiblingObjectRecord`)** apuntadas por `fields[14]` (`+0x14`).
- `fields[13]` (`+0x10`, `u32`): Puntero al arreglo de **Zonas Trigger de Mapa** (`28` bytes por entrada: `fn0, fn1, (y1<<16)|x1, (y2<<16)|x2, script_ptr, w5, w6`).
- `fields[14]` (`+0x14`, `u32`): Puntero al arreglo de punteros `u32` de **Entidades del Mapa** (enemigos, NPCs, objetos).
- `fields[20]` (`+0x2C`, `u32`): Puntero al arreglo de punteros `root_record` de la sección del mapa, seguido por una palabra de variación por cada entidad en `fields[14]`.
- `fields[21]` (`+0x30`, `u32`): Puntero opcional a un flujo de bytecode `map_script_stream`.

### 2.2. Raíz de Sección de Mapa (`root_record`, `0x50` = 80 bytes, 20 `u32`)
Cada `root_record` define la geometría visual, las capas de tiles, las colisiones y las salidas (`warps`) del mapa:
- `+0x0C` (`u32`) y `+0x10` (`u32`): Cantidad y puntero a filas de animación de tiles (`map_anim_row`).
- `+0x14`, `+0x18`, `+0x1C`, `+0x20` (`4 × u32`): Punteros a los registros de las capas **`BG0`, `BG1`, `BG2`, `BG3`**:
  - Si la primera palabra del registro de capa es `0x08008087` (`DOMINANT_LAYER`):
    - `site + 0x14` (`u8`): `cols` (ancho del mapa en bloques de `256×256` píxeles).
    - `site + 0x15` (`u8`): `rows` (alto del mapa en bloques de `256×256` píxeles).
    - `site + 0x18`: Arreglo de `cols * rows` punteros `u32` a contenedores `webfoot_lz`.
    - Cada contenedor descomprime exactamente a `0x800` (`2,048`) bytes = `32 × 32` entradas `u16` de screenblock GBA:
      - `tile_id = entry & 0x3FF` (índice `0..1023` en la VRAM del mapa).
      - `hflip = (entry >> 10) & 1`.
      - `vflip = (entry >> 11) & 1`.
- `+0x24` (`u32`, `warp_count`) y `+0x28` (`u32`, `warp_base_ptr`): Tabla de **Salidas / Warps (`root_table_record`)**. Cada entrada mide `24` bytes (`6 × u32`):
  - `word[0..3]`: `x1, y1, x2, y2` (caja delimitadora en píxeles dentro del mapa actual).
  - `word[4]`: `(dest_y << 16) | dest_x` (coordenadas de aparición en el mapa destino).
  - `word[5]`: `(dest_dir << 16) | dest_map` (ID del mapa destino y dirección).
- `+0x48` (`u32`, `word_48`) y `+0x4C` (`u32`, siempre `0x08179764` = `TILE_BANK_TABLE`):
  - **Algoritmo de Carga de Tiles en VRAM (`loc_08009BD4`)**:
    1. Se descomprime el contenedor `webfoot_lz` apuntado por `root + 0x48`, obteniendo `N` medias palabras `u16` (`arr[0..N-1]`).
    2. Se aplica decodificación delta acumulativa:
       ```python
       for i in range(1, N):
           arr[i] = (arr[i] + arr[i - 1] + 1) & 0xFFFF
       ```
    3. Para cada ranura de tile en VRAM `i` (`0..N-1`):
       - `bank_index = (arr[i] >> 8) & 0xFF` (selecciona uno de los 187 `Tilebanks` en `0x08179764`).
       - `tile_index = arr[i] & 0xFF` (selecciona el tile `8×8` de 64 bytes dentro de ese `Tilebank`, en `tile_index * 64`).

---

## 3. Entidades en Mapas: Personajes, Enemigos, NPCs y Objetos

Cada puntero en `MapEntry.fields[14]` apunta a un registro cuya primera palabra (`word[0]`) es la dirección de su función constructora (fábrica Thumb con bit 0 activo):

### 3.1. Enemigos con Patrulla (`PlacementRecord`, `word[0] == 0x0800FD55`)
Tamaño: `28 + 4 * child_count` bytes:
- `+0x00` (`u32`): `0x0800FD55` (`PLACEMENT_FACTORY`).
- `+0x04` (`u32`): ID de spawn / flags de persistencia.
- `+0x08` (`u32`): **`enemy_stat_id`** (`0..149`, índice en la tabla `enemy_stat_record` en `0x08711274`).
- `+0x0C` (`u32`): Coordenadas empaquetadas `(Y << 16) | X` en píxeles.
- `+0x10` (`u32`): **`sprite_id`** (`0..296`, índice en la tabla `sprite_definition` en `0x086B6BDC`).
- `+0x14` (`u32`): Puntero a `DescriptorRecord` (`8` bytes).
- `+0x18` (`u32`): `child_count` (cantidad de puntos de patrulla).
- `+0x1C..`: `child_count` punteros `u32` a estructuras **`PlacementChild`** de `12` bytes (`<I4H`: `fn_ptr`, `waypoint_x`, `waypoint_y`, `wait_frames`, `radius`).

### 3.2. NPCs con Diálogo/Evento y Objetos (`SiblingObjectRecord`, `28` bytes)
- **NPC / Actor de Diálogo (`word[0] == 0x08017DA3`)**:
  - `word[1]`: ID / flag.
  - `word[2]`: Coordenadas `(Y << 16) | X` en píxeles.
  - `word[3]`: Puntero al evento en `event_pool_record` (`0x0877C5A4..0x0879B704` o región personalizada).
  - `word[4]`: **`sprite_id`** (`0..296`).
- **Objeto Interactivo de Mapa (`word[0] == 0x080111A9`)**:
  - `word[2]`: Coordenadas `(Y << 16) | X` en píxeles.
  - `word[3]`: **`sprite_id`** (`0..296`).
  - `word[5]`: Puntero a callback / evento.

---

## 4. Sprites y Animaciones OAM (`0x086B6BDC`)

- **Tabla Índice (`0x086B6BDC`)**: `297` punteros `u32` a estructuras `sprite_definition`.
- **`sprite_definition`**:
  - `byte[0]`: `slot_count` (número de animaciones que posee el sprite).
  - `+0x54`: Arreglo de `slot_count` punteros `u32` a estructuras `sprite_animation`.
- **`sprite_animation`**:
  - `+0x00` (`u32`): `frame_count` (número de cuadros de la animación).
  - `+0x04`: Matriz de `frame_count × 4` punteros `u32` a `sprite_frame` (4 direcciones por cada cuadro: `0=Sur`, `1=Norte`, `2=Oeste`, `3=Este`).
- **`sprite_frame`**:
  - `+0x00` (`u32`): `piece_count` (cantidad de piezas OAM que componen el cuadro).
  - `+0x04` (`u32`): `word_04` (bounding box general).
  - `+0x08`: `piece_count` piezas de `12` bytes (`<III`: `attr`, `flags`, `container_ptr`):
    - `attr` (4 bytes `<bbBB`): `dx` (offset X con signo), `dy` (offset Y con signo), `width` (ancho en píxeles: `8..64`), `height` (alto en píxeles: `8..64`).
    - `flags`: Atributos OAM GBA; `(flags >> 28) & 1` = `H-Flip`, `(flags >> 29) & 1` = `V-Flip`.
    - `container_ptr`: Puntero ROM a un contenedor `webfoot_lz` con los tiles 8bpp (`width * height` bytes) coloreados con `sprite.pal` (`0x05652C`).

---

## 5. Estadísticas de Enemigos (`enemy_stat_record` en `0x08711274`)

150 registros contiguos de `0x1C` (`28`) bytes (`7 × u32`):
1. `word_00` (`+0x00`): Nivel base / categoría / flags de combate.
2. `hp` (`+0x04`): Puntos de vida (HP).
3. `word_08` (`+0x08`): Ataque / Fuerza.
4. `word_0c` (`+0x0C`): Defensa / Experiencia otorgada.
5. `word_10` (`+0x10`): Parámetro secundario de velocidad/ki.
6. `ai_node` (`+0x14`): Puntero ROM (`0x08...`) al árbol de comportamiento de IA (`ai_behaviour_node`).
7. `word_18` (`+0x18`): Tabla de caída de objetos / zeni.

---

## 6. Eventos (`event_pool_record`) y Scripts (`map_script_stream`)

- **`event_pool_record` (`0x0877C5A4..0x0879B704`)**:
  - Indexado por `522` punteros `u32` en `0x0879B704`.
  - La primera palabra (`word[0]`) apunta a la cabecera de diálogo cuyo byte en `+2` indica el `dialog_type` (`0, 3, 4, 5, 6, 7`), seguida por punteros a sub-bloques de acciones, condiciones de historia y referencias a cadenas `UTF-16LE`.
- **`map_script_stream` (Intérprete en `0x08004038`, tabla en `0x080554C0`)**:
  - Máquina virtual basada en flujos de bytes con opcodes `0x00..0x1E`, donde `0x11` es el terminador (`END`) y los operandos pueden ser `none`, `byte`, `varint` (7 bits con bit 7 de continuación), `counted`, `jump`, `branch` y `loop`.
