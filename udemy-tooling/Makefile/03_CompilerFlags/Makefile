# Variables

DEBUG ?= 1  # default value for variable
ifeq ($(DEBUG), 1) 
CPP_COMPILER_FLAGS = -g -O0 -Wall -Wextra -Wpedantic -Wconversion -std=c++17
EXECUTABLE_NAME = mainDebug
else
CPP_COMPILER_FLAGS = -O3 -Wall -Wextra -Wpedantic -std=c++17
EXECUTABLE_NAME = mainRelease
endif

CPP_COMPILER = g++
CPP_COMPILER_CALL = $(CPP_COMPILER) $(CPP_COMPILER_FLAGS)

# TARGETS

build: my_lib.o
	$(CPP_COMPILER_CALL) main.cpp my_lib.o -o $(EXECUTABLE_NAME)

my_lib.o:
	$(CPP_COMPILER_CALL) my_lib.cpp -c

run:
	./$(EXECUTABLE_NAME)

clean:
	rm -f *.o mainRelease mainDebug
