# Usage

**preprocess** and **assemble** are already included in **compile** step.
So it's just for showing but unecessary.

In folder:

- `make preprocess` produces Temp.cc
  - lot of stuff from #include
- `make assemble` produces HelloWorld.s
  - assemble code from cc file

**print_exe** with objdumb shows machine-code

# Flags

Compare files with both FLAGS.

- `-g3` most verbose debug info
- `-O0` no optimization
- `-DNDEBUG`

## analyzer

- `ANALYSER_FLAGS = -fanalyzer`
- does little more then just warnings
- similar to clan-tide... addtition to compiler warnings
- slow, not in porduction or during debugging?
- available for gcc and clang

## adress sanatizer

- `SANITIZER_FLAGS = -fsanitize=address`
- looking for address memory problems
- linux only

# Remarks

## Hierarchy of the Build Process

[cpp-compilation-process](https://www.prepbytes.com/blog/cpp-programming/cpp-compilation-process/)

![Build Process Diagram](./build_process.png)

- **Preprocessing**
  - All preprocessing directives are handled, including file inclusions, macro expansions, and conditional compilation.
  - `g++ -E main.cpp -o main.i`
- **Compilation**
  - The preprocessed code is compiled into assembly language specific to the target architecture.
  - `g++ -S main.i -o main.s`
- **Assembly**
  - The assembler converts the assembly code into machine code and produces an object file.
  - `g++ -c main.s -o main.o`
- **Linking**
  - The linker takes one or more object files and combines them into a single executable file. It resolves symbols and addresses to ensure that function calls and variable accesses are correctly linked.
  - `g++ main.o -o main`

## Detailes

- **The Preprocessor** By using the preprocessor, it can include additional files in the project without worrying about the C++ translation of the syntax. It operates on a single source file at a time, replacing #include directives with their contents replacing macro define statements with ifdef/endif clauses, and making choices based on the "#if" command. After all of this, the preprocessor generates a single output, a stream of tokens resulting from the alterations mentioned. Also, it contains a few special markers that identify each line’s production location so the compiler can provide helpful error messages. Using #if and #error directives wisely can cause some issues to appear.

- **Compilation** The output of the preprocessor is compiled during the assembly phase. The compiler turns assembly language into pure C++ source code, which it then parses and builds. The underlying back-end is then called, compiling the code into machine language and creating a genuine binary file in some format. The syntax for the symbols defined in the input is contained in this file. In object files, symbols are referred to by name. Object files can make references to symbols that aren’t specified. This is the case when you use a declaration without giving it a definition. Given that we are defining an array inside another, this is an excellent illustration of when the cast was required. As long as the source code is valid, the Cpp compiler doesn’t care about this and will gladly create the object file. At this point, most compilers let you terminate the compilation process. This is highly useful because it enables you to separately compile each source code file. The advantage of this is that if only one file is modified, you don’t have to recompile everything.

- **Assembler** Source code is transformed into object code by the assembler. On a UNIX system, you can notice files with the .o extension, which stand for object code files (.OBJ on MSDOS). The object files are processed by the assembler, which transforms their assembly code into machine language instructions. A relocatable object code is a file that is created. As a result, the compilation procedure creates an object code that is relocatable and may be utilized in other locations without the need for additional compilation.

- **Linking** The code known as the linker converts the object files produced by the compiler into a finished compilation output. This finished product could either be an executable or a shared library, which shares names with static libraries. By substituting the references to the missing symbols with their proper addresses, it resolves symbols that haven’t been declared in any file. Other object files or libraries may declare these symbols. You must inform the compiler about them if they are defined in modules other than the primary ones. At this phase, missing definitions or repeated definitions are the most frequent mistakes. The first suggests that the words are not present (such that, there were not written), but the second suggests that the same symbols were defined twice in two different object files and libraries.

- **Conclusion** The compilation process in C++ is a multifaceted journey that translates human-readable code into machine-executable instructions. From preprocessing and compilation to assembly and linking, each stage contributes to the creation of a final executable file. Mastering the nuances of this process empowers developers to write optimized, error-free code, understand complex debugging scenarios, and comprehend the inner workings of their applications. Continual exploration and comprehension of the compilation process remain pivotal for C++ programmers aiming to enhance their software development skills.

- **.s Files (Assembly Source Files)**
  - Content: These files contain assembly language code, which is a low-level programming language that is specific to a computer architecture.
  - Generation: Typically produced by compilers as an intermediate step when converting higher-level languages like C or C++ into machine code.
  - Usage: Can be manually written or generated to understand or optimize the assembly code that the compiler produces.

- **.o Files (Object Files)**
  - Content: These files contain machine code generated by the compiler, but they are not yet linked into a complete program.
  - Generation: Created when a source file (.c, .cpp, or .s) is compiled. Each source file usually results in one corresponding object file.
  - Usage: Used by the linker to combine with other object files and libraries to produce the final executable.

- **Executable Files**
  - Content: These files contain fully linked and ready-to-run machine code that the operating system can execute.
  - Generation: Created by the linker, which combines object files and resolves all symbols (functions, variables, etc.) into a single program.
  - Usage: Executable files are run directly by the operating system. On Unix-like systems, these typically have no extension but may sometimes end with .out or .bin. On Windows, they typically end with .exe.
