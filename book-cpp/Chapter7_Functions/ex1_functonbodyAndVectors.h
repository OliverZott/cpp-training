/**
 * FunctonbodyAndVectors.h
 *
 * - Example to understand Function Body and use Vectors
 * - calculates Prime numbers
 *
 *  Created on: 09.07.2019
 *      Author: Dura
 */

#ifndef FUNCTONBODYANDVECTORS_H_
#define FUNCTONBODYANDVECTORS_H_

//#include <iostream>
//#include <vector>



/* Global vector variable */
extern std::vector<int> prims;

/* Function DECLARATION: Function to test for specific integer if its prime */
bool testIfPrim ( int n );

/* Function DECLARATION: Function to calculate prime numbers */
void calcPrimsTo ( int ende );

/* Function DECLARATION: Function to print prims to std-output */
void ausgabe ( int a);


#endif /* FUNCTONBODYANDVECTORS_H_ */
