/**
 * Chapter 7.6
 *
 * - Function Call
 * - Vectors (unsing, printing)
 *
 *  Created on: 09.07.2019
 *      Author: Dura
 */


/* !WICHTIG!
 * 1. Funktionen AUSSERHALB von main deklarieren / definieren (auch wenn nicht OOP --> h + cpp
 * 2. Achtung auf Parameter (wo stehen und ob lokal, global) z.B. Problem wenn in main  "std::vector<int> prims = {2};"
*/


#include <iostream>
#include <vector>

std::vector<int>  prims = {2}; // @suppress("Invalid arguments")

/* Function that tests if specific value is prime  */
bool testIfPrim ( int n ) {
    for ( int teil : prims ) {          	// range based loop, uses global vector variable
        if ( teil*teil > n ) {           	// access to parameter
            //std::cout << "prim: " <<  n << std::endl;
            return true;
        }
        if ( n%teil == 0 ) {
            //std::cout << "not prim: " << n << std::endl;
            return false;
        }
    }
    return true;
}


/* Function that calculates prime numbers up to a given end value; calls function "testIfPrim */
void calcPrimsTo ( int ende ) {
    for ( int n = 3; n < ende; n = n+2 ) {
        if ( testIfPrim(n) ) {
            prims.push_back(n);             // push_back
        }
    }
    // return
}


/* Function for output of final prime vector */
void ausgabe ( int a) {
    std::cout << "ausgabe: " << a << std::endl;
}


