/**
 * CallByRefVal.cpp
 *
 * - Call-By-Reference
 * - Call-By-Value
 * - Constant Reference
 *
 *
 *  Created on: 09.07.2019
 *      Author: Oliver Zott
 */

#include<iostream>


/* Function DEFINITION: Call by value example-function */
void print_val8(int n){
	std::cout << "Start value: " << n << std::endl;
	n = 8;
	std::cout << "Set value to: " << n << std::endl;
}

/* Function DEFINITION: Call by reference example-function */
void print_val10(int& n){
	std::cout << "Start value: " << n << std::endl;
	n = 10;
	std::cout << "Set value to: " << n << std::endl;
 }
