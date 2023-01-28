/**
 * page 254 / 256
 *
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;


struct Person0               // type-definition
{
    string name_;
    int alter_;
    string ort_;
};

void drucke(Person0 p)       // function separated
{
    cout << p.name_ << " (" << p.alter_ << " aus " << p.ort_ << ") \n";
}


/* Examnple (p.256) - return value from own type */
Person0 erzeuge (string name, int alter, string ort)
{
    // Person result {name, alter, ort};
    // return result;
    return {name, alter, ort};
}
