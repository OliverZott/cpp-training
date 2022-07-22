#ifndef EX4_CONSTRUCTOR_H_INCLUDED
#define EX4_CONSTRUCTOR_H_INCLUDED

#include <string>
#include <iostream>

struct Person_const
{
    std::string name_;
    int alter_;
    std::string ort_;

    Person_const();
    Person_const(std::string n, int a, std::string o);
    Person_const(std::string n, int a);

};


std::ostream& operator<<(std::ostream& os, Person_const p);

#endif // EX4_CONSTRUCTOR_H_INCLUDED
