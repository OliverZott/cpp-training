# C++ Course

<https://www.udemy.com/course/der-komplettkurs-zur-modernen-c-programmierung/learn/lecture/11702546#questions/18657802>
<https://github.com/franneck94/UdemyCpp>

## Prerequisites

- Install C++ Compiler
  - gcc g++
  - gdb (version 9.4.2 ?)
  - make
- VS Code
  - Install C / C++ package (MS)
  - Install C++ config package
  - ctrl + shift + P --> C/C++ Config: Generate C++ Config FIles
- Formatter: Clang-Format [doc](https://clang.llvm.org/docs/ClangFormat.html)
- Linter: Clang-Tidy
  - [doc](https://clang.llvm.org/extra/clang-tidy/)
  - [video](https://www.udemy.com/course/der-komplettkurs-zur-modernen-c-programmierung/learn/lecture/29779776#questions/18657802)

## Run and Debug

- use CLI
  - `g++ TernaryOperator.cc -g -o main` ... -g for debugging
  - `g++ 08StructuredBinding.cc -g -std=c++20 -o main`  ...-std=xxx for specific c++ compiler
  - `g++ filecc -g -std=c++20 -o main`
  - `./main`
  - `g++ Game.cc  Main.cc -g -o main` ...if various cpp files (ignore headers)
- Use makefile:
  - `make build` and `make run`, afterwards `make clean`
- For debugging
  - make sure `-g` **flag** is set in makefile!
  - Select file and click **(gdb) Launch** in the Debug Window
- Debugging ARGV:
  - <https://www.udemy.com/course/der-komplettkurs-zur-modernen-c-programmierung/learn/lecture/29370936#announcements>

----

- Run with plugin
  - ctrl + shift + B --> Cpp: Debug (Single File) / (Folder)
  - ctrl + shift + B --> Execute: Debug Programm
- Run alternative:
  - ctrl + shift + B --> Cpp: Debug (Single File)
  - C:\Users\HAL9000\source\repos\udemy_vscode>cd 1_Intro
  - C:\Users\HAL9000\source\repos\udemy_vscode\1_Intro>mainDebug.exe

## Cleanup

user scripts:

- `.\cleanup.ps1`
- `.\cleanup.sh`

# Remarks

## Content

- Chapter1: Intro
- Chapter2: Variables, Loops, Conditions, Functions, Tooling, Various
- Chapter3:  
  - Arrays (c-style)  -> c++-style: std::string, std::vector, std::array
  - Pointers
- Chapter4:
  - Enum
  - Struct
  - namespaces

## Compiler / Assembler

[Debug vs Release Mode](https://www.udemy.com/course/der-komplettkurs-zur-modernen-c-programmierung/learn/lecture/21945536#questions/18657802)  
[Assembler explorer](https://godbolt.org/)  
[How the compiler works](https://www.toptal.com/c-plus-plus/c-plus-plus-understanding-compilation)  

- Translation Unit == .cpp + .hpp file
- Include Guard ...to only include functions once
  - `#pragma once`

## Chapter02

### General

- `#define` vs `const` [link](https://www.geeksforgeeks.org/diffference-define-const-c/)
- `Uniform Initialization` e.g.: `auto var = int{2}` [link](https://ianyepan.github.io/posts/cpp-uniform-initialization/)
- const, constexpr, static
- type casting e.g. `static_cast<float>(var)`

### Arrays

- C-style arrays point to memory address (first byte) of array
- C-style arrays have const length! (always provide array length to functions)
- Better us C++ style! `std::array<type>`

### Loops

- `continue` vs `break`
  - continue ...starts next loop
  - break ...end loop completely
- `for` vs `while`
  - for ...we "know" how often loop will run (x-times)
  - while ...for more complex break-conditions (loop can run 1 or 9999 times)

## Chapter03

### Stack / Heap

Memory management important because no garbage collector in C++

- [Section 8 - Video 64](https://www.udemy.com/course/der-komplettkurs-zur-modernen-c-programmierung/learn/lecture/9363462#announcements)
- **Stack**
  - small (8MB default)
  - fast
  - automatic allocation/deallocation
  - array size must be known to compile time (e.g. array)
- **Heap**
  - big
  - manuall (de)allocation (New and Delete)
  - later: smart pointer

### Pointers and c-style Arrays

- **Pointer**
  - pointer are on the STACK
  - pointer can point to any memory (HEAP, STACK,...)
- **Pointer-Array**
  - to allocate HEAP and have pointer to first addres
  - int *a = new int[10]{1, 2, 3};
- **Call-By-Reference** vs **Call-By-Value** with differenct cases:
  - Input only (`const int v`)
  - Input only with ref (`const int &v`)  // const, but i dont want to create a copy
  - Output only (???)
  - Input & Output (call-by-ref and NO const: `int &v`)

## Conventions

- <https://google.github.io/styleguide/cppguide.html#Variable_Names>

# Todo

- Edit Make file for single output folder and clean-up before each build (auto delete executables)!
