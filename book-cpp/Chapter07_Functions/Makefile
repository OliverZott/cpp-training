make all: build run clean

# TARGETS
build: ex1_functonbodyAndVectors.o ex2_callByRefVal.o ex3_function_parameters.o
	g++ main.cpp ex1_functonbodyAndVectors.o ex2_callByRefVal.o ex3_function_parameters.o -g -o main

ex1_functonbodyAndVectors.o:
	g++ ex1_functonbodyAndVectors.cpp -c -g

ex2_callByRefVal.o:
	g++ ex2_callByRefVal.cpp -c -g

ex3_function_parameters.o:
	g++ ex3_function_parameters.cpp -c -g
run:
	./main

clean:
	rm -f *.o main
