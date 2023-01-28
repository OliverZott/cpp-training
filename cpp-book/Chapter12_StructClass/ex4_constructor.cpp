/**
 * Chapter 12.8: Constructors
 * (page 267 - ...)
 *
 * - constructor general
 * - default values / delegation / constructor-parameter default values
 *
 *
 * @author Oliver Zott
 */

 #include <string>
 #include <iostream>

 #include "ex4_constructor.h"

 using std::string;

/*
 struct Person_const
{
    std::string name_;
    int alter_;
    std::string ort_;

    Person_const();
    Person_const(string name, int alter, string ort);
};
*/

 // constructor (structure declared in header file!)
Person_const::Person_const() :
                 name_{"bla"},    // initialising values
                 alter_{-1},
                 ort_{"blub"}
                {}


// constructor with 3 parameters
Person_const::Person_const(string n, int a, string o)
                 {
                     name_ = n;
                     alter_ = a;
                     ort_ = o;
                 }

// constructor with 2 parameters
Person_const::Person_const(string n, int a) :
    name_{n}, alter_{a}{}

// overloading standard output
std::ostream& operator<<(std::ostream& os, Person_const p)
{
    return os << p.name_ << " from " << p.ort_ << " (ostream overloading)." << std::endl;
}
