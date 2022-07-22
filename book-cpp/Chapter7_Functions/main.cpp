/**
 * Chapter 7 - functions
 *
 * -
 * -
 * -
 *
 *
 *
 *
 * @author Oliver Zott
 * @date 2019-07-09
 */

#include <iostream>
#include <vector>
#include <typeinfo>

#include "ex2_callByRefVal.h"
#include "ex1_functonbodyAndVectors.h"
#include "ex3_overload.h"
#include "ex4_parameters_default_various.h"


int main() {

	// ##############################################################################################
	// Example 1: Call-By-Reference vs. Call-By-Value vs. constant variables
	/*
	std::cout << std::endl;
	std::cout << "========== Example1: Call-By-Value vs. Call-By-Reference ==========" << std::endl;

	int k = 78;

	std::cout << "--- Call-By-Value Version (NO Side-Effect) ---" << std::endl;
	print_val8(k);
	std::cout << "Current value of variable: " << k << std::endl;

	std::cout << std::endl;
	std::cout << "--- Call-By-Reference Version (Side-Effect) ---" << std::endl;

	print_val10(k);
	std::cout << "Current value of variable: " << k << std::endl;
	//*/


	// ##############################################################################################
	// Example 2: Function Body with Vectors -> Calculates Prime numbers
	/*
    std::cout << std::endl;
    std::cout << "========== Example2: Functions with Vector ==========" << std::endl;

    int l = 18;
    calcPrimsTo ( l );


    std::cout << "Size of Prims-Vector: " <<  prims.size() << std::endl;

    std::cout << "Output with Iteratore: " << "\n";
    for (auto i = prims.begin(); i != prims.end(); ++i)                        // output with ITERAORE (better for containers!)  S.160
        std::cout << *i << ' ';
    std::cout << std::endl << std::endl;

    std::cout << "Output with range-based-loop: " << "\n";
    for ( int index : prims)
        std::cout << index << ' ';
    std::cout << std::endl<< std::endl;
    //*/


    // ##############################################################################################
    // Example 3: Function overload

    /*
    print(17);
    print(6.321);       // compiler chooses right function
    print(7, 6.321);
    print(7.241, 6);    // no appropriate function but casting possible

    add(2,5);
    // add(1.2, 3)         // compiler can't decide which to take (both possible)
    //*/


    // ##############################################################################################
    // Example 4: arbitrary parameter amount

    //*
    std::cout << add(12, 3.9, 4.1) << std::endl;

    int x[] = {1,4,7,11};
    std::string a;
    std::cout << typeid(a).name() << std::endl;

    std::cout << add({3,3,7,12,8,87,11,900}) << std::endl;      // how call list or array/vector ?
    //*/
}

