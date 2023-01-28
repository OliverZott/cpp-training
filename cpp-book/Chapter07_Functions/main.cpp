/**
 * Chapter 7 - Functions
 *
 * @author Oliver Zott
 * @date 2019-07-09
 */

#include <iostream>
#include <vector>
#include <typeinfo>

#include "ex1_functonbodyAndVectors.h"
#include "ex2_callByRefVal.h"
#include "ex3_function_parameters.h"

int main()
{

    // Function Body with Vectors -> Calculates Prime numbers (ex1_functonbodyAndVectors)
    std::cout << " ---------------------------------- Example 1 ---------------------------------- " << std::endl;

    int l = 18;
    calcPrimsTo(l);

    std::cout << "Size of Prims-Vector: " << prims.size() << std::endl;

    std::cout << "Output with Iteratore: "
              << "\n";
    for (auto i = prims.begin(); i != prims.end(); ++i) // output with ITERATOR (better for containers!)  S.160
        std::cout << *i << ' ';
    std::cout << std::endl
              << std::endl;

    std::cout << "Output with range-based-loop: "
              << "\n";
    for (int index : prims)
        std::cout << index << ' ';
    std::cout << std::endl
              << std::endl;

    // Call-By-Reference vs. Call-By-Value vs. constant variables (ex2_callByRefVal)
    std::cout << " ---------------------------------- Example 2 ---------------------------------- " << std::endl;

    int k = 78;

    std::cout << "--- Call-By-Value Version (NO Side-Effect) ---" << std::endl;
    print_val8(k);
    std::cout << "Current value of variable: " << k << std::endl;

    std::cout << std::endl;
    std::cout << "--- Call-By-Reference Version (Side-Effect) ---" << std::endl;

    print_ref8(k);
    std::cout << "Current value of variable: " << k << std::endl;

    // Function parameters
    std::cout << " ---------------------------------- Example 3 ---------------------------------- " << std::endl;

    print(17);
    print(6.321); // compiler chooses right function
    print(7, 6.321);
    print(7.241, 6); // no appropriate function but casting possible

    add(2.0, 5.0);
    // add(2, 5); // ambiguous overload
    // add(1.2, 3); // compiler can't decide which to take (both possible)
    // std::cout << add(12, 3.9, 4.1) << std::endl;

    int x[] = {1, 4, 7, 11};
    std::string a;
    std::cout << typeid(a).name() << std::endl;

    std::cout << add({3, 3, 7, 12, 8, 87, 11, 900}) << std::endl; // how call list or array/vector ?

    return 0;
}
