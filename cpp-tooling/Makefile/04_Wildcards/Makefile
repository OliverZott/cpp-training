# https://www.udemy.com/course/c-projekte-fur-fortgeschrittene-cmake-tests-und-tooling/learn/lecture/21544130#questions/17949030



# ============================= Variables =============================
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

CPP_SRCS = $(wildcard *.cpp)
CPP_OBJECTS = $(patsubst %.cpp, %.o, $(CPP_SRCS)) # creates lists with .o endings for all cpp files

CPP_OBJECTS2 = my_lib.o main.o  # alternative version with explicit 
 

# ============================= Pseudo Targest =============================
build: $(EXECUTABLE_NAME)


# ============================= TARGETS =============================
$(EXECUTABLE_NAME): $(CPP_OBJECTS)
	echo $(CPP_OBJECTS)
	$(CPP_COMPILER_CALL) $^ -o $@


# ============================= Patterns =============================

# $< ...the name of the first dependency  	(%.cpp)
# $@ ...the file name of the target			(%.o)

# Target: Dependency
%.o: %.cpp
	$(CPP_COMPILER_CALL) -c $< -o $@ 


# ============================= Run and Clean =============================
run:
	./$(EXECUTABLE_NAME)

clean:
	rm -f *.o mainRelease mainDebug