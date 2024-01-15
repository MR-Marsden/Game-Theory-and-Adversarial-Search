@echo off
set SOURCE_FILE=Minimax.cpp
set OUTPUT_FILE=Minimax.exe

echo Compiling %SOURCE_FILE%...
g++ %SOURCE_FILE% -o %OUTPUT_FILE%

if %errorlevel% neq 0 (
    echo Compilation failed.
) else (
    echo Compilation successful.
    echo Running %OUTPUT_FILE%...
    .\%OUTPUT_FILE%
)