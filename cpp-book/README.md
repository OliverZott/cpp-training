# Run and Debug

- Use makefile:
  - `make build` and `make run`, afterwards `make clean`
- For debugging
  - make sure `-g` **flag** is set in makefile!
  - Select file and click **(gdb) Launch** in the Debug Window

# Remarks

- header file naming conventions: [link](https://named-data.net/doc/ndn-cpp-dev/0.4.0/code-style#:~:text=Naming%20Conventions&text=File%20names%20should%20be%20all,the%20name%20of%20the%20class.)
  - e.g.: `#ifndef APP_MODULE_CLASS_NAME_HPP` for header file located in module/class-name.hpp

# Prerequisites

## Windows

- Install compiler and gdb

## Linux / WSL

- `gcc -v`
- `gdb -v`
- `make -v`
- `g++ -v`
- `sudo apt-get install build-essential gdb`

## VS Code

- tasks.json ...For compiler build settings.
  - Press the play button in the top right corner of the editor.
  - Choose g++ build and debug active file from the list of detected compilers on your system.
- launch.json ...For debugger settings.
  - Command Palette (Ctrl + Shift + P) or (F1) -> Add Debug Configuration
  - `g++ build and debug active file`
- c_cpp_properties.json ...For compiler path and IntelliSense settings (for more control over the C/C++ extension).
  - Command Palette (Ctrl + Shift + P) or (F1) -> C/C++: Edit Configurations (UI)
  - Creates json file
- settings.json ...Modified setting values are stored in a settings.json file.
