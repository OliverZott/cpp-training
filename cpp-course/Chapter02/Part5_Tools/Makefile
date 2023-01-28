DEBUG_FLAGS = -g3 -O0
RELEASE_FLAGS = -DNDEBUG 

FLAGS = $(RELEASE_FLAGS)

preprocess:
	g++ $(FLAGS) -E HelloWorld.cc > temp.cc

assemble:
	g++ $(FLAGS) -S HelloWorld.cc

compile:
	g++ $(FLAGS) -c HelloWorld.cc -o HelloWorld.o

build:
	g++ $(FLAGS) HelloWorld.o -o HelloWorld

print_exe:
	objdump -CS HelloWorld

# https://www.udemy.com/course/der-komplettkurs-zur-modernen-c-programmierung/learn/lecture/29339690#questions/18657802