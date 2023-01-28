#include "Lib.h"

/*
https://www.udemy.com/course/der-komplettkurs-zur-modernen-c-programmierung/learn/lecture/27553188#overview

Compiler checks if code respective to header is already included

Try withoput pragma first:
g++ Lib.cc Main.cc -o main

C++ style:
  - #pragma once

C style:
  - #ifndef <UNIQUE_NAME>
  - #define <UNIQUE_NAME>
  - ... Codee ...
  - #endif

*/

int main()
{
    function();
    return 0;
}