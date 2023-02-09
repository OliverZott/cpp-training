# https://www.udemy.com/course/c-projekte-fur-fortgeschrittene-cmake-tests-und-tooling/learn/lecture/21544130#questions/17949030

# ============================= Variables =============================
DEBUG ?= 1 # default value
ENABLED_WARNINGS ?= 1 # default value
WARNINGS_AS_ERRORS ?= 0 # default value

EXECUTABLE_NAME = main
INCLUDE_DIR = include
SOURCE_DIR = src
BUILD_DIR = build

CXX = g++
CXX_STANDARD = c++20
CXXFLAGS = $(CXX_WARNINGS) -std=$(CXX_STANDARD)
CPP_FLAGS = -I $(INCLUDE_DIR)
LDFLAGS =

ifeq ($(ENABLED_WARNINGS), 1)
CXX_WARNINGS = -Wall -Wextra -Wpedantic
else
CXX_WARNINGS =
endif

ifeq ($(WARNINGS_AS_ERRORS), 1) # build fails on errors!
CXX_WARNINGS += -Werror
endif

ifeq ($(DEBUG), 1) 
CXXFLAGS += -g -O0
EXECUTABLE_NAME = mainDebug
else
CXXFLAGS += -O3
EXECUTABLE_NAME = mainRelease
endif

CPP_COMPILER_CALL = $(CXX) $(CXXFLAGS) $(CPP_FLAGS)

CPP_SOURCES = $(wildcard $(SOURCE_DIR)/*.cpp)
CPP_OBJECTS = $(patsubst $(SOURCE_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(CPP_SOURCES)) # creates lists with .o endings for all cpp files


# ============================= Pseudo Targest =============================
all:
	create build

# @ to supress utput in terminal "@mkdir"
# each line is executed in separat terminal ... to connect: "mkdir build && cd build" 
create:
	mkdir -p build

# All in one line
# build: $(CPP_OBJECTS)
# 	$(CPP_COMPILER_CALL) $(CPP_OBJECTS) -o $(BUILD_DIR)/$(EXECUTABLE_NAME)

build: $(BUILD_DIR)/$(EXECUTABLE_NAME)

# ============================= TARGETS =============================
$(BUILD_DIR)/$(EXECUTABLE_NAME): $(CPP_OBJECTS)
	$(CPP_COMPILER_CALL) $^ -o $@


# ============================= Patterns =============================

# $< ...name of first dependency  	(%.cpp)
# $@ ...file name of target			(%.o)
# Target: Dependency
$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.cpp
	$(CPP_COMPILER_CALL) -I $(INCLUDE_DIR) -c $< -o $@ 

# ============================= PHONY =============================
# used if not dependant on file names
.PHONY: all create build execute clean


# ============================= Run and Clean =============================
run:
	./$(BUILD_DIR)/$(EXECUTABLE_NAME)

clean:
	rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/mainRelease $(BUILD_DIR)/mainDebug