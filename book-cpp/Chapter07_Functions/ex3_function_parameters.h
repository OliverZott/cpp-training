#ifndef EX3_OVERLOAD_H_INCLUDED
#define EX3_OVERLOAD_H_INCLUDED

#include <algorithm>

void print(int value);
void print(double value);
void print(int value1, double value2);

void add(double a, double b);
void add(int a, int b);

double add(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0);

int add(std::initializer_list<int> ns);

#endif // EX3_OVERLOAD_H_INCLUDED
