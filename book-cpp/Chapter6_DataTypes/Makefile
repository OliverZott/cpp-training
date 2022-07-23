make all: build run clean

# TARGETS
build: ex1_pointers.o ex2_string.o ex3_streams.o ex4_container.o
	g++ main.cpp ex1_pointers.o ex2_string.o ex3_streams.o ex4_container.o -o main

ex1_pointers.o:
	g++ ex1_pointers.cpp -c

ex2_string.o:
	g++ ex2_string.cpp -c

ex3_streams.o:
	g++ ex3_streams.cpp -c

ex4_container.o:
	g++ ex4_container.cpp -c

run:
	./main

clean:
	rm -f *.o main