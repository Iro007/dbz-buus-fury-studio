@echo off
title Dragon Ball Z: Buu's Fury Studio — Editor de Mapas, Personajes y Eventos
cd /d "%~dp0"
echo ============================================================================
echo   Dragon Ball Z: Buu's Fury Studio
echo   Editor Visual de Mapas, Personajes, Sprites, Enemigos y Eventos
echo ============================================================================
echo.
echo Iniciando servidor en http://127.0.0.1:8765 ...
start "" http://127.0.0.1:8765
python "%~dp0editor\server.py" 8765
pause
