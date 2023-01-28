/**
 * Function Body (chapter 7.6)
 * (page 172)
 *
 * - Function Call
 * - Vectors (unsing, printing)
 *
 * @author Oliver Zott
 * @date 2019-07-09
 */

/* ! IMPORTANT !
 * 1. Funktionen AUSSERHALB von main deklarieren / definieren (auch wenn nicht OOP --> h + cpp
 * 2. Achtung auf Parameter (wo stehen und ob lokal, global) z.B. Problem wenn in main  "std::vector<int> prims = {2};"
 */

#include <iostream>
#include <vector>

std::vector<int> prims = {2}; // @suppress("Invalid arguments")

bool testIfPrim(int n)
{
    // range based loop, uses global vector variable
    for (int teil : prims)
    {
        if (teil * teil > n)
        {
            // access to parameter
            // std::cout << "prim: " <<  n << std::endl;
            return true;
        }
        if (n % teil == 0)
        {
            // std::cout << "not prim: " << n << std::endl;
            return false;
        }
    }
    return true;
}

void calcPrimsTo(int ende)
{
    for (int n = 3; n < ende; n = n + 2)
    {
        if (testIfPrim(n))
        {
            prims.push_back(n); // push_back
        }
    }
}

void ausgabe(int a)
{
    std::cout << "ausgabe: " << a << std::endl;
}
