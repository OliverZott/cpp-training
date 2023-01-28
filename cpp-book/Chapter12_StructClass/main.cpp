/**
 * Chapter 12 Example 1: - structures & classes
 * (page 254 - ...)
 *
 * - struct
 * - functions separated
 *
 * @author Oliver Zott
 * @date 2019-12-07
 */

#include <iostream>
#include <string>
#include <fstream>

#include "ex1_struct.h"         // Person object as struct
#include "ex2_method.h"         // added print function for Person objects
#include "ex3_overloading.h"    // overload example for print-function
#include "ex4_constructor.h"    //

using std::string;
using std::cout;


int main()
{
    /*
    // ex1:
    Person0 otto {"Lenchen", 31, "Mutters"};         // initialising (struct-version)
    drucke(otto);
    Person0 leer {};
    drucke(leer);
    cout << std::endl;

    // ex2:
    Person2 olli {"Ollgu", 35, "Innsbruck"};
    olli.drucke();                                  // member-function (struct-version)
    cout<< olli.gruss() << std::endl;;
    drucke(erzeuge("sigi", 3, "zwuguhausen"));
    cout << std::endl;


    // ex3: sophisticated print-function (output parameter)
    std::ofstream file {"person.txt"};
    olli.drucke_soph(file);

    // Overload ostream example (ex3_overloading)
    Person_overl olli_ol {"bla", 1, "blub"};
    cout << olli_ol;
    */

    // ex4: constructor
    Person_const Olllgu {};     // constructor without parameters
    cout << Olllgu;
    cout << Olllgu.name_ << std::endl;
    Olllgu.name_ = "Olliii";
    cout << Olllgu;

    Person_const Lenzwu {"Leni", 32, "Mutters"};
    Person_const Sigi {"Sigi", 1};
    cout << Lenzwu;
    cout << Sigi;


    return 0;
}
