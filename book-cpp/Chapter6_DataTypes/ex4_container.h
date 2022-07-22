#ifndef EX4_CONTAINER_H_INCLUDED
#define EX4_CONTAINER_H_INCLUDED

// why need to include vector but not array ???
#include <vector>


using Januar = std::array<int, 31>;
// using vector_example = std::vector<int>

void array_ex4();

void initJanuar(Januar& jan);
int sumJanuar(const Januar jan);
void printJanuar(Januar jan);
void printJanuar2(Januar jan);

void vector_ex1(std::vector<int>& vec);
void print_vector(std::vector<int>& vec);


#endif // EX4_CONTAINER_H_INCLUDED
