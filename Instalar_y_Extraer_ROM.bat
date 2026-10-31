@echo off
setlocal enabledelayedexpansion
title Instalador y Extractor de ROM — DBZ: Buu's Fury Studio
cd /d "%~dp0"

echo ============================================================================
echo   Dragon Ball Z: Buu's Fury Studio — Extractor de Assets de la ROM
echo ============================================================================
echo.

if not exist "buusfury-disasm\baserom.gba" (
    if exist "Dragon Ball Z - Buu's Fury (USA).gba" (
        echo Copiando "Dragon Ball Z - Buu's Fury (USA).gba" a buusfury-disasm\baserom.gba ...
        copy /Y "Dragon Ball Z - Buu's Fury (USA).gba" "buusfury-disasm\baserom.gba" >nul
    ) else (
        echo [ERROR] No se encontro la ROM original en la carpeta.
        echo Coloca tu ROM "Dragon Ball Z - Buu's Fury (USA).gba"
        echo ^(SHA-1: f1c4b07554d2a3b1ad2f325307051e775ce68087^) en esta carpeta
        echo o en "buusfury-disasm\baserom.gba" y vuelve a ejecutar este script.
        pause
        exit /b 1
    )
)

cd /d "%~dp0buusfury-disasm"
echo [1/10] Extrayendo paletas bg.pal y sprite.pal...
python tools\assets\extract_palettes.py --rom baserom.gba --out build || goto :err

echo [2/10] Extrayendo bitmaps generados...
python tools\assets\generate_assets.py extract --rom baserom.gba || goto :err

echo [3/10] Extrayendo 187 Tilebanks PNG y payloads.store...
python tools\tilebank\generate_tilebank.py extract --rom baserom.gba || goto :err

echo [4/10] Extrayendo 5,069 contenedores de mapas y 3,956 registros de mapas...
python tools\mapcontainer\generate_mapcontainer.py --block map extract --rom baserom.gba || goto :err

echo [5/10] Extrayendo 7,390 contenedores de sprites...
python tools\mapcontainer\generate_mapcontainer.py --block sprite extract --rom baserom.gba || goto :err

echo [6/10] Extrayendo 297 definiciones de sprites, 1,017 animaciones y 10,980 frames...
python tools\mapcontainer\generate_mapcontainer.py --block spritedefs extract --rom baserom.gba || goto :err

echo [7/10] Extrayendo registros end-of-ROM ^(IA, 150 enemigos, 522 eventos^)...
python tools\mapcontainer\generate_mapcontainer.py --block endrom extract --rom baserom.gba || goto :err

echo [8/10] Extrayendo assetdir y tablas estructuradas ^(MapEntry, Placements, NPCs^)...
python tools\assetdir\generate_assetdir.py --block records extract --rom baserom.gba || goto :err
python tools\assetdir\generate_assetdir.py --block dir3 extract --rom baserom.gba || goto :err
python tools\structured\generate_structured.py extract --rom baserom.gba || goto :err

echo [9/10] Extrayendo streams de opcodes y contenedores JCALG1...
python tools\build\generate_opcode.py extract --rom baserom.gba || goto :err
python tools\build\generate_jcalg1.py extract --rom baserom.gba || goto :err

echo [10/10] Extrayendo rodajas binarias etiquetadas ^(.extracted^)...
python tools\build\extract_rom.py baserom.gba || goto :err

echo.
echo ============================================================================
echo   Extraccion completada con exito!
echo   Ya puedes ejecutar Abrir_Editor_BuusFury.bat
echo ============================================================================
pause
exit /b 0

:err
echo.
echo [ERROR] Fallo un paso de la extraccion.
pause
exit /b 1
