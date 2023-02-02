DEBUG_FLAGS = -g3 -O0
RELEASE_FLAGS = -DNDEBUG 
WARNING_FLAGS = -Wall -Wextra -Wpedantic -Wshadow -Wconversion
SANITIZER_FLAGS = -fsanitize=address
ANALYSER_FLAGS = -fanalyzer 

FLAGS = $(DEBUG_FLAGS) $(WARNING_FLAGS) $(SANITIZER_FLAGS) $(ANALYSER_FLAGS)

preprocess:
	g++ $(FLAGS) -E Main.cc > temp.cc

assemble:
	g++ $(FLAGS) -S Main.cc

compile:
	g++ $(FLAGS) -c Main.cc -o Main.o

build:
	g++ $(FLAGS) Main.o -o Main

build_all:
	g++  $(FLAGS) Main.cc -o Main

print_exe:
	objdump -CS Main

# https://www.udemy.com/course/der-komplettkurs-zur-modernen-c-programmierung/learn/lecture/29339690#questions/18657802
# https://www.udemy.com/course/der-komplettkurs-zur-modernen-c-programmierung/learn/lecture/29816344#announcements