#ifndef EX1_STRUCT_H_INCLUDED
#define EX1_STRUCT_H_INCLUDED

#include <string>

using std::string;


struct Person0
{
    string name_;
    int alter_;
    string ort_;
};

void drucke(Person0 p);

Person0 erzeuge(string name, int alter, string ort);


#endif // EX1_STRUCT_H_INCLUDED
