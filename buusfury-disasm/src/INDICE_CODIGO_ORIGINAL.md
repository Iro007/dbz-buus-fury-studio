# 💻 Código Fuente Original Reconstruido (C/C++) — *Dragon Ball Z: Buu's Fury*

Esta carpeta contiene la traducción y reconstrucción completa en **C/C++** de las **3,371 funciones** (`303,190` bytes de código ARM7TDMI/Thumb), las **218 tablas virtuales de clases C++ (`vtables`)** y las **1,524 cadenas de texto (`UTF-16LE`)** del motor original de Webfoot Technologies.

## 1. Módulos Principales del Motor Reconstruidos a Mano (`src_original/engine/`)

| Archivo | Subsistema / Funciones Reconstruidas |
| :--- | :--- |
| `include/buusfury_types.hpp` | Cabecera maestra: registros de hardware GBA, estructuras `Actor`, `DamagePacket`, `MapEntry`, `MapRootRecord`, `PlacementRecord`, `SiblingObjectRecord`, `SpriteDefinition`, `EnemyStatRecord`. |
| `include/classes_vtables.hpp` | Las **218 clases C++ y tablas de métodos virtuales (`VTable_080491F0`..)** extraídas de `0x080491F0..0x080554BF`. |
| `engine/battle_and_damage.cpp` | Sistema de combate: `Battle_ApplyDamage` (`0x0800FA2A`), `Battle_ComputeDamage` (`0x0800E9DC`), `Battle_CreateEnemy` (`0x0800F694`), `Battle_SpawnDamageObject` (`0x0800E8E8`), `Gfx_BuildVitalBars` (`0x0800B9B0`). |
| `engine/map_and_vram_loader.cpp` | Motor de mapas: descompresor `WebfootLZ_Decompress`, cargador de tiles a VRAM con decodificación delta `Map_LoadTileBanksToVram` (`loc_08009BD4`), colisiones de zonas Warp (`Map_CheckWarpTransition`). |
| `engine/actors_npcs_objects.cpp` | Gestor de memoria dinámica EWRAM (`GBARam_Init`, `GBARam_Malloc`, `GBARam_Free`), fábrica de NPCs con diálogo (`Npc_SpawnFromSiblingRecord` en `0x08017DA2`), constructores, destructores y temporizadores de objetos. |
| `engine/script_vm_and_events.cpp` | Máquina virtual de scripts de mapa (`ScriptVM_ExecuteStream` en `0x08004038`) y los 31 handlers de opcodes (`0x00..0x1E` en `0x08003C74..0x0800402A`, tabla en `0x080554C0`). |
| `engine/hardware_gfx_bios.cpp` | Drivers de hardware GBA: DMA3 (`Dma_Start3First/Second`), mezcla alfa (`Blend_WriteControl1..5`), scroll de capas (`Bg_WriteScroll2And3`), mosaico, interrupciones (`Irq_WriteEnable1..3`) y temporizadores. |
| `engine/strings_table_utf16.cpp` | Las **1,524 cadenas de texto `UTF-16LE`** (`0x0805792C..0x0806D4E0`). |

## 2. Las 3,371 Funciones de la ROM Decompiladas a C++ (`src_original/decompiled/`)

| Módulo C++ | Rango de Direcciones GBA | Funciones |
| :--- | :--- | :--- |
| `decompiled/module_00_08000158.cpp` | `0x08000158..0x0800547E` | 100 funciones |
| `decompiled/module_01_080054BA.cpp` | `0x080054BA..0x080076A6` | 100 funciones |
| `decompiled/module_02_080076D6.cpp` | `0x080076D6..0x0800A4BC` | 100 funciones |
| `decompiled/module_03_0800A4E2.cpp` | `0x0800A4E2..0x0800C3F8` | 100 funciones |
| `decompiled/module_04_0800C420.cpp` | `0x0800C420..0x0800E9C6` | 100 funciones |
| `decompiled/module_05_0800E9D8.cpp` | `0x0800E9D8..0x08011650` | 100 funciones |
| `decompiled/module_06_0801170A.cpp` | `0x0801170A..0x080140F6` | 100 funciones |
| `decompiled/module_07_0801411E.cpp` | `0x0801411E..0x080178BC` | 100 funciones |
| `decompiled/module_08_080178C0.cpp` | `0x080178C0..0x08019D2C` | 100 funciones |
| `decompiled/module_09_08019D3A.cpp` | `0x08019D3A..0x0801C62C` | 100 funciones |
| `decompiled/module_10_0801C634.cpp` | `0x0801C634..0x0801FC9E` | 100 funciones |
| `decompiled/module_11_0801FD54.cpp` | `0x0801FD54..0x080232FA` | 100 funciones |
| `decompiled/module_12_0802333E.cpp` | `0x0802333E..0x080264D4` | 100 funciones |
| `decompiled/module_13_08026510.cpp` | `0x08026510..0x08028D1C` | 100 funciones |
| `decompiled/module_14_08028DAE.cpp` | `0x08028DAE..0x0802B5CE` | 100 funciones |
| `decompiled/module_15_0802B5EA.cpp` | `0x0802B5EA..0x0802DE62` | 100 funciones |
| `decompiled/module_16_0802DE66.cpp` | `0x0802DE66..0x08030C2E` | 100 funciones |
| `decompiled/module_17_08030F78.cpp` | `0x08030F78..0x08034330` | 100 funciones |
| `decompiled/module_18_080343C6.cpp` | `0x080343C6..0x08036C4E` | 100 funciones |
| `decompiled/module_19_08036CB6.cpp` | `0x08036CB6..0x080391BA` | 100 funciones |
| `decompiled/module_20_080391C2.cpp` | `0x080391C2..0x0803B368` | 100 funciones |
| `decompiled/module_21_0803B36A.cpp` | `0x0803B36A..0x0803CE64` | 100 funciones |
| `decompiled/module_22_0803CE70.cpp` | `0x0803CE70..0x0803F55E` | 100 funciones |
| `decompiled/module_23_0803F58C.cpp` | `0x0803F58C..0x08042604` | 100 funciones |
| `decompiled/module_24_08042638.cpp` | `0x08042638..0x08047FB4` | 100 funciones |
| `decompiled/module_25_08047FBC.cpp` | `0x08047FBC..0x08048A18` | 100 funciones |
| `decompiled/module_26_08048A1A.cpp` | `0x08048A1A..0x0804AACE` | 100 funciones |
| `decompiled/module_27_0804AAE2.cpp` | `0x0804AAE2..0x0804F278` | 100 funciones |
| `decompiled/module_28_0804F280.cpp` | `0x0804F280..0x0804FA2C` | 100 funciones |
| `decompiled/module_29_0804FA30.cpp` | `0x0804FA30..0x0805072C` | 100 funciones |
| `decompiled/module_30_08050750.cpp` | `0x08050750..0x08050F84` | 100 funciones |
| `decompiled/module_31_08050F86.cpp` | `0x08050F86..0x08051FE4` | 100 funciones |
| `decompiled/module_32_08051FE8.cpp` | `0x08051FE8..0x080534A8` | 100 funciones |
| `decompiled/module_33_08053694.cpp` | `0x08053694..0x087B7F04` | 71 funciones |
