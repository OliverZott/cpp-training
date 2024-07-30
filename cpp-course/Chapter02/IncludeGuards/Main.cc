#include "Lib.h"

/*
https://www.udemy.com/course/der-komplettkurs-zur-modernen-c-programmierung/learn/lecture/27553188#overview

- Compiler checks if code respective to header is already included
- include guards ONLY in h files and ONLY in first line

Try without pragma first:


compile: g++ Lib.cc Main.cc -o main
run: ./main


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