# https://www.udemy.com/course/c-projekte-fur-fortgeschrittene-cmake-tests-und-tooling/learn/lecture/21544130#questions/17949030



# ============================= Variables =============================
INCLUDE_DIR = include
SOURCE_DIR = src
BUILD_DIR = build


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

CPP_SRCS = $(wildcard $(SOURCE_DIR)/*.cpp)
CPP_OBJECTS = $(patsubst $(SOURCE_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(CPP_SRCS)) # creates lists with .o endings for all cpp files


# ============================= Pseudo Targest =============================
build: $(BUILD_DIR)/$(EXECUTABLE_NAME)


# ============================= TARGETS =============================
$(BUILD_DIR)/$(EXECUTABLE_NAME): $(CPP_OBJECTS)
	$(CPP_COMPILER_CALL) $^ -o $@


# ============================= Patterns =============================

# $< ...first dependency  (%.cpp)
# $@ ...target			(%.o)

# Target: Dependency
$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.cpp
	$(CPP_COMPILER_CALL) -I $(INCLUDE_DIR) -c $< -o $@ 


# ============================= Run and Clean =============================
run:
	./$(BUILD_DIR)/$(EXECUTABLE_NAME)

clean:
	rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/mainRelease $(BUILD_DIR)/mainDebug