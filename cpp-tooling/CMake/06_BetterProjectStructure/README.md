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
