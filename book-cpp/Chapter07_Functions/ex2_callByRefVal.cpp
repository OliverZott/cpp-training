/**
 * Call by Reference example (chapter 7.5)
 * (page 168)
 *
 * - Functions:
 * 		- definition ...in cpp file (with body)
 * 		- declaration ...in h file (just head)
 * - Call-By-Reference
 * - Call-By-Value
 * - Constant Reference
 *
 * @author Oliver Zott
 * @date 2019-07-09
 */

#include <iostream>

void print_val8(int n)
{
	std::cout << "Start value: " << n << std::endl;
	n = 8;
	std::cout << "Set value to: " << n << std::endl;
}

void print_ref8(int &n)
{
	std::cout << "Start value: " << n << std::endl;
	n = 8;
	std::cout << "Set value to: " << n << std::endl;
}
