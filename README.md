# 🐉 Dragon Ball Z: Buu's Fury Studio — Editor de Mapas, Personajes, Sprites y Creador de Eventos

Suite completa de ingeniería inversa, extracción en Python puro y edición visual interactiva para ***Dragon Ball Z: Buu's Fury* (Game Boy Advance, USA)**.

> ⚠️ **Aviso Legal / Copyright**: Este repositorio **NO incluye ninguna ROM (`.gba`) ni assets binarios extraídos con copyright**. Para utilizar el editor y las herramientas de desmontaje debes proporcionar tu propia copia legal de la ROM `Dragon Ball Z - Buu's Fury (USA).gba`.

---

## ✨ Características Principales

### 1. 🗺️ Editor Visual de Mapas y Niveles (`452 Mapas` / `427 Secciones Root`)
- **Renderizado Exacto de Hardware GBA**:
  - Decodifica las 4 capas de fondo (`BG0`, `BG1`, `BG2`, `BG3`) a partir de los contenedores comprimidos con `webfoot_lz`.
  - Implementa el algoritmo exacto de carga de VRAM del motor Webfoot (`loc_08009BD4` en `0x08009BD4`), realizando la decodificación delta del contenedor `root + 0x48` y cruzándolo con los **187 bancos de tiles (`Tilebanks`)** en `0x08179764` y la paleta `bg.pal` (`0x05632C`).
- **Colocación y Edición Interactiva (`Drag & Drop`)**:
  - **Enemigos (`PlacementRecord`, fábrica `0x0800FD55`)**: Arrastra enemigos por el mapa, agrega nuevos enemigos con un clic, asigna cualquiera de los **297 Sprites** y cualquiera de los **150 perfiles de estadísticas**, y edita visualmente sus **rutas de patrulla (`PlacementChild` Waypoints)**.
  - **NPCs y Actores con Diálogo/Evento (`SiblingObjectRecord`, fábrica `0x08017DA3`)**: Coloca nuevos personajes o NPCs en cualquier mapa y vincúlalos a cualquier evento del pool (`0x0877C5A4..0x0879B704`) o a eventos personalizados creados por ti.
  - **Objetos Interactivos (`0x080111A9`)**: Coloca cofres, puertas u objetos interactivos de escenario.
  - **Zonas Warp / Salidas (`root_table_record`)**: Visualiza y edita los rectángulos de transición entre mapas (`X1, Y1, X2, Y2`), el `Mapa Destino`, las coordenadas de llegada (`Destino X, Y`) y navega entre mapas conectados con un clic (**🚀 Ir al Mapa**).
  - **Triggers de Script de Mapa (`MapEntry ptrs[1]`)**: Edita las zonas de activación de scripts en el mapa.
- **Pintor de Tiles 8×8 con Compresión `webfoot_lz`**:
  - Selecciona cualquier tile cargado en la VRAM del mapa (con soporte de `H-Flip` y `V-Flip`) y píntalo directamente sobre `BG0..BG3`. Al guardar, el chunk `32×32` se recomprime automáticamente con `webfoot_lz.pack` y se actualiza en la ROM.

### 2. 🐉 Catálogo de 297 Sprites OAM y Editor de 150 Enemigos
- **Visor Animado OAM (`297 Definiciones de Sprites` en `0x086B6BDC`)**:
  - Explora las `297` definiciones de sprites (`1,017` animaciones y `10,980` frames en total).
  - Ensambla en tiempo real las piezas OAM de 8bpp (`dx, dy, width, height, hflip, vflip`) usando `sprite.pal` (`0x05652C`).
  - Previsualiza todos los slots de animación en las 4 direcciones (`Sur`, `Norte`, `Oeste`, `Este`) y envía cualquier sprite al mapa activo con un clic.
- **Editor de Estadísticas de Enemigos y Jefes (`150 Registros` en `0x08711274`)**:
  - Edita `HP (Vida)`, `Ataque / Fuerza (word_08)`, `Defensa / EXP (word_0c)`, `Nivel / Tipo (word_00)` y el puntero al nodo de comportamiento de IA (`ai_node`).
  - Muestra en qué mapas aparece cada enemigo y qué sprites utiliza.

### 3. 📜 Creador de Eventos, Desensamblador de Scripts y Editor de Textos
- **Inspector y Creador de Eventos (`522 Registros` en `0x0877C5A4..0x0879B704`)**:
  - Inspecciona y modifica las tablas de palabras de 32 bits y punteros de los 522 eventos del juego.
  - **✨ Clonar como Nuevo Evento en ROM**: Crea nuevos eventos personalizados alojados dinámicamente en el espacio libre de la ROM (`0x087B89B0+`) y asígnalos directamente a cualquier NPC de tus mapas.
- **Editor de Diálogos y Textos UTF-16LE (`1,524 Cadenas` en `0x05792C..0x06D4E0`)**:
  - Buscador instantáneo de todos los diálogos, nombres de personajes, misiones y objetos del juego, con edición directa en la ROM.
- **Desensamblador de Bytecode de Scripts de Mapa (`map_script_stream`, intérprete en `0x08004038`)**:
  - Desensambla los 132 flujos de opcodes (`0x00..0x1E`, tabla de despacho en `0x080554C0`).

### 4. 💻 Código Fuente Original Reconstruido y Decompilado en C/C++ (`src_original/`)
Se ha traducido el **100% del código ejecutable de la ROM (`3,371 funciones`, `303,190 bytes` de ARM7TDMI/Thumb y `571 VTables` de clases C++)** a código fuente C/C++ estructurado:
- **`src_original/include/buusfury_types.hpp`**: Estructuras de datos completas del motor Webfoot (`Actor`, `ActorVTable`, `DamagePacket`, `EnemyStatRecord`, `MapEntry`, `MapRootRecord`, `DominantLayerRecord`, `PlacementRecord`, `SiblingObjectRecord`, `SpriteDefinition`, `MallocHeader`, registros hardware GBA `REG_DISPCNT`, `REG_DMA3*`, etc.).
- **`src_original/include/classes_vtables.hpp`**: Las **571 Tablas de Métodos Virtuales (`VTables`)** de las clases C++ del juego (`0x080491F0..0x08057920`) con cada método virtual mapeado a su función y dirección ROM.
- **`src_original/engine/` (Módulos Idiomáticos del Motor en C++)**:
  - `battle_and_damage.cpp`: Sistema de combate, creación de enemigos (`Battle_CreateEnemy`), paquetes de daño (`Battle_SpawnDamageObject`), cálculo de daño físico/energía/críticos (`Battle_ComputeDamage`), aplicación de daño y estados (`Battle_ApplyDamage`) y barras de vida/Ki (`Gfx_BuildVitalBars`).
  - `map_and_vram_loader.cpp`: Descompresor `WebfootLZ_Decompress` (`kinds 0, 1, 2`), cargador delta de bancos de tiles a VRAM (`Map_LoadTileBanksToVram` en `0x08009BD4`) y colisión de zonas warp (`Map_CheckWarpTransition`).
  - `actors_npcs_objects.cpp`: Gestor de memoria Heap en EWRAM (`GBARam_Init`, `GBARam_Malloc`, `GBARam_Free`), fábrica de NPCs con eventos (`Npc_SpawnFromSiblingRecord`) y listas enlazadas de actores (`Object_Construct1`, `Object_AppendEntry1`).
  - `script_vm_and_events.cpp`: Máquina virtual de scripts de eventos (`ScriptVM_ExecuteStream` en `0x08004038`), decodificador `ScriptVM_ReadVarint` y tabla de despacho de los 31 opcodes (`0x080554C0`).
  - `hardware_gfx_bios.cpp`: Controladores de registros de hardware GBA (Blending, Scroll BG0..BG3, Mosaic, DMA3, Timers, interrupciones y wrappers BIOS `SWI`).
  - `strings_table_utf16.cpp`: Las **1,524 cadenas de texto UTF-16LE** (`0x0805792C..0x0806D4E0`) exportadas como tabla C++.
- **`src_original/decompiled/module_00..33.cpp`**: Las **3,371 funciones** de la ROM (`0x08000158..0x080554BC`) y rutinas críticas en IWRAM (`0x03004EC4..0x03005920`) decompiladas a C/C++ con resolución simbólica de literales PC-relative, llamadas virtuales `vtable`, registros hardware y constantes plegadas.
- **Visor Integrado en el Studio**: Explora y busca cualquier función o módulo C/C++ directamente desde la pestaña **`💻 Código Original C/C++ (3,371 Func.)`** del editor web.

---

## 📁 Estructura del Repositorio

```text
├── Abrir_Editor_BuusFury.bat           # Lanzador con 1 clic del servidor y interfaz web
├── Instalar_y_Extraer_ROM.bat          # Desempaquetador completo de la ROM en Python puro
├── README.md                           # Documentación general del proyecto
├── docs/
│   └── ARQUITECTURA_TECNICA_BUUS_FURY.md # Especificación técnica completa de formatos y offsets
├── src_original/                       # Código fuente original C/C++ reconstruido y decompilado
│   ├── INDICE_CODIGO_ORIGINAL.md       # Índice maestro de la decompilación C/C++
│   ├── include/                        # Cabeceras C++ (buusfury_types.hpp, classes_vtables.hpp)
│   ├── engine/                         # Módulos principales del motor Webfoot en C++ legible
│   └── decompiled/                     # 34 módulos C++ con las 3,371 funciones de la ROM
├── tools_decompiler/
│   └── decompile_rom_to_cpp.py         # Decompilador estático ARM7TDMI/Thumb -> C/C++
├── editor/
│   ├── server.py                       # Backend HTTP + motor de renderizado y parcheo GBA
│   └── index.html                      # Aplicación web Studio (Canvas HTML5 + Inspector + Visor C++)
└── buusfury-disasm/                    # Desensamblador simbólico y herramientas Webfoot
    ├── asm/                            # +2,900 archivos de ensamblador ARM7TDMI/Thumb
    ├── src/                            # Código C/C++ base (strings.cpp, GBARam.c, etc.)
    ├── include/                        # Cabeceras y definiciones
    └── tools/                          # Parsers binarios (webfoot_lz, mapcontainer, spritefamily, etc.)
```

---

## 🚀 Requisitos e Instalación Rápida

### 1. Requisitos
- **Python 3.10+** instalado y en el `PATH` (no requiere librerías externas ni compiladores C/C++ para extraer ni para usar el editor).
- Copia legal de la ROM **`Dragon Ball Z - Buu's Fury (USA).gba`**:
  - **Tamaño**: `8,388,608` bytes (8 MB)
  - **SHA-1**: `f1c4b07554d2a3b1ad2f325307051e775ce68087`
  - **SHA-256**: `940ad5f01db4465b8877dfe739510cbf34f4ea3d390f3df13519808bc36f059e`

### 2. Paso 1 — Colocar y Extraer la ROM
1. Coloca tu archivo `Dragon Ball Z - Buu's Fury (USA).gba` en la raíz de esta carpeta (o cópialo como `buusfury-disasm/baserom.gba`).
2. Ejecuta **`Instalar_y_Extraer_ROM.bat`**.
   - Este script ejecutará los 10 pasos de extracción en Python puro (paletas, 187 tilebanks, 5,069 chunks de mapas, 7,390 gráficos de sprites, 297 definiciones de sprites, 150 enemigos, 522 eventos, opcodes y contenedores JCALG1) y generará los archivos `.store` locales en `buusfury-disasm/assets/`.

### 3. Paso 2 — Abrir el Editor Visual
1. Haz doble clic en **`Abrir_Editor_BuusFury.bat`** (o ejecuta `python editor/server.py 8765`).
2. Se abrirá automáticamente tu navegador en **[http://127.0.0.1:8765](http://127.0.0.1:8765)**.
3. Al pulsar **💾 Guardar Mapa Actual** o **🎮 Exportar ROM (.gba)**, el editor generará la ROM lista para jugar en:
   ```text
   Dragon Ball Z - Buu's Fury (Modded).gba
   ```
   Puedes abrir ese archivo directamente en **mGBA**, **VisualBoyAdvance-M** o cualquier flashcart GBA.

---

## 📖 Documentación Técnica de Ingeniería Inversa

Consulta **[docs/ARQUITECTURA_TECNICA_BUUS_FURY.md](docs/ARQUITECTURA_TECNICA_BUUS_FURY.md)** para ver la especificación detallada de todas las tablas binarias, estructuras de memoria, algoritmos de compresión `webfoot_lz` y `JCALG1`, formato de `MapEntry`, `root_record`, `PlacementRecord`, `SiblingObjectRecord`, `sprite_definition`, `enemy_stat_record`, `event_pool_record` y `map_script_stream`.

---

## 🙏 Créditos y Referencias

- **[siruiusamory-cmyk/buusfury-disasm](https://github.com/siruiusamory-cmyk/buusfury-disasm)** y **[2genkidev/buusfury](https://github.com/2genkidev/buusfury)** por la base de desensamblaje e investigación de contenedores Webfoot.
- **[mstan/DragonBallZBuusFuryRecomp](https://github.com/mstan/DragonBallZBuusFuryRecomp)** y **[mstan/DragonBallZLegacyofGokuIIRecomp](https://github.com/mstan/DragonBallZLegacyofGokuIIRecomp)** por la referencia de arquitectura del motor de *Legacy of Goku II / Buu's Fury*.
