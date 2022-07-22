/**
 * Chapter 6.1: Sequence Container
 * (page156)
 *
 * - array: fixed size
 * - vector: grows with items
 * - "using" to avoid repetition
 * - Algorithms (work on many containers)
 * - index / iterators
 *
 *
 *
 *
 * @author Oliver Zott
 */

#include <array>
#include <vector>
#include <iostream>

#include <algorithm>        // for "accumulate"
#include <numeric>          // for "iota"

using std::cout;
using std::array;
using std::string;
using std::endl;

using Januar = std::array<int, 31>;     // function2 (page158)

constexpr size_t TAGE = 7;      // good flavour: array size as constant !


// ###################################################################
//                      Array example
// ###################################################################

// function1 (page 157)
void array_ex4()
{

    // creating array
    array<string, TAGE> weekday = {"Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", "Saturday", "Sunday"};

    // output of array
    cout << "First day of the week: " << weekday[0] << ".\n";
    cout << "Last day of the week: " << weekday[6] << ".\n";

    // change array value
    weekday[5] = "Sonnabend";
    cout << weekday[5]  << endl;
}


// function2 (page 158)                         // "using" or "typedef" to avoid repetition
void initJanuar(Januar& jan)                    // "&" important to write to container!
{
    std::iota(begin(jan), end(jan), 17);        // iota... linspace / begin, end ...iterator
}

int sumJanuar(const Januar jan)                 // exact array as parameter
{
    return std::accumulate(begin(jan), end(jan), 0);
}


// print array - method 1
void printJanuar(Januar jan)
{
    for (auto i = begin(jan); i <= end(jan); i++)
    std::cout << "Day " << i - jan.begin()  << ", " << *i << std::endl;     // what with element 31 ?????
}

// print array - method 2 (range-based for loop)
void printJanuar2(Januar jan)
{
    for (int integer: jan)
    {
        cout << integer << ", ";
    }
    cout << endl;
}

// ###################################################################
//                      Vector example
// ###################################################################

// function3 (page 159)
void vector_ex1(std::vector<int> &squares)
{
    for (int idx = 0; idx <= 100; ++idx)
    {
        squares.push_back(idx*idx);
    }
}

void print_vector(std::vector<int>& vec)
{
    for (int integer: vec)
    {
        cout << integer << " ";
    }
    cout << endl;
}







