@echo off

gcc main.c game.c -o ENGXCONSOLE.exe

if %errorlevel% == 0 (
    echo Build Success!
) else (
    echo Build Failed!
)

pause