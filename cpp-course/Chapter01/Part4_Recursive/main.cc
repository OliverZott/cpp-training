#include <iostream>

int faculty(int i)
{
    if (i > 1)
    {
        return i * faculty(i - 1);
    }
    else
    {
        return 1;
    }
}

int sum(int i)
{
    if (i > 1)
    {
        return i + sum(i - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    unsigned int n = 11;
    unsigned long long n_fac = faculty(n);
    unsigned long long n_sum = sum(n);

    std::cout << n << "! = " << n_fac << std::endl;
    std::cout << n << "-sum = " << n_sum << std::endl;
}
