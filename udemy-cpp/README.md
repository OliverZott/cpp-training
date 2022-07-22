# Build & Run (VS Code)

-   Install C++ Compiler
    -   gcc g++
    -   gdb (version 9.4.2 ?)
    -   make
-   VS Code
    -   Install C / C++ package (MS)
    -   Install C++ config package
    -   ctrl + shift + P --> C/C++ Config: Generate C++ Config FIles
-   start programm:
    -   ctrl + shift + B --> Cpp: Debug (Single File) / (Folder)
    -   ctrl + shift + B --> Execute: Debug Programm
-   start programm alternative:
    -   ctrl + shift + B --> Cpp: Debug (Single File)
    -   C:\Users\HAL9000\source\repos\udemy_vscode>cd 1_Intro
    -   C:\Users\HAL9000\source\repos\udemy_vscode\1_Intro>mainDebug.exe

# Cleanup

user scripts:

-   `.\cleanup.ps1`
-   `.\cleanup.sh`

# Conventions

-   https://google.github.io/styleguide/cppguide.html#Variable_Names

# Remarks

-   Translation Unit
-   Include Guard
    -   `#pragma once`

#### Stack vs Heap

-   Section 8 - Video 64
-   Stack
    -   small (8MB default)
    -   fast
    -   automatic allocation/deallocation
    -   array size must be known to compile time (e.g. array)
-   Heap
    -   big
    -   manuall (de)allocation

# Todo

-   Edit Make file for single output folder and clean-up before each build (auto delete executables)!
