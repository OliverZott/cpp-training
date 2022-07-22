/**
 * Chapter 7.8 - overload functions
 * (page 173)
 *
 * - default must be constexpr
 * - std::initializer_list for arbitrary parameter amount
 *
 *
 * @author Oliver
 */

 #include <algorithm>

// default parameters
double add(int a=0, int b=0, int c=0, int d=0, int e=0)
{
 return a+b+c+d+e;
}

// arbitrary argument amount
int add(std::initializer_list<int> ns)
{
    return std::accumulate(begin(ns), end(ns), 0);
}
