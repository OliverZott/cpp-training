# GIT submodules

<https://www.udemy.com/course/c-projekte-fur-fortgeschrittene-cmake-tests-und-tooling/learn/lecture/21578504#questions>

Downloaded project has to be cmake project as well

In Projecet path:

- `git submodule add https://github.com/nlohmann/json external/json`

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
