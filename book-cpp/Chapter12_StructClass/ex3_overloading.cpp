/**
 * Overloading of std::cout function
 * page 262
 *
 * @author Oliver Zott
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


struct Person_overl              // type-definition
{
    string name_;
    int alter_;
    string ort_;

    std::ostream& drucke(std::ostream& os);          //function as method
};


// Version 1:
std::ostream& Person_overl::drucke(std::ostream& os)
{
    return os << name_ << " from " << ort_ << " (ostream overloading)." << endl;
}

std::ostream& operator<<(std::ostream& os, Person_overl p)
{
    return p.drucke(os);
}


// Version 2: field directly printed
/*
std::ostream& operator<<(std::ostream& os, Person_overl p)
{
    return os << name_ << " from " << ort_ << " (ostream overloading)." << endl;
}
//*/
