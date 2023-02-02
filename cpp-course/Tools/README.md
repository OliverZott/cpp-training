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
