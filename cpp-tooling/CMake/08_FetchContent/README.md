# GIT submodules

- mainly for libs WITHOUT Cmake

# Fetch Contentn

- better if lib HAS Cmake
- change:
  - CMakeLists in project
  - CMakeLists in src/my_lib
  - CMakeLists in app
- `strg + shift + p` -> `Cmake: Delete Cache And Reconfigure`
- compile all (build button or `cmake --build .` with `cmake ..` before if necessary)

# Specify build target

- mkdir build
- cd build/
- `cmake ..`
- `cmake --build . --target Library`
- `cmake --build . --target Executable` or `make Library`

as defined in

```C++
set(EXE_NAME Executable)
set(LIB_NAME Library)
```
