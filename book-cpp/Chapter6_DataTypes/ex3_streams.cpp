/**
 * Streams Example
 * (page 1)
 *
 *      - streams(cout, cerr, cin)
 *      - array
 *      - ITERATOR
 *
 *
 * @author Oliver Zott
 * @date 2019-12-06
 */

 #include <string>
 #include <iostream>
 #include <array>
 #include <iomanip>


void eingabe2(                              // call by reference
        std::string &name,
        std::array<int, 4> &monthlyIncome)
{
    std::cout << "Name: ";
    std::getline(std::cin, name);           // read with white-spaces!
    if (name.length() == 0)
    {
        std::cout << "Empty name-string!\n";
        exit(1);
    }

    // enter monthly income to integer-array
    for (int m = 0; m < 4; ++m)
    {
        std::cout << "income of month " << m+1 << ": ";
        std::cin >> monthlyIncome[m];
    }

    std::cout << "Your Name: " << name << std::endl;


    // Iterator used to get
    for ( auto i = monthlyIncome.begin(); i != monthlyIncome.end(); ++i)
    {
        std::cout << "month: " << i - monthlyIncome.begin() + 1  << ", income: " << *i << std::endl;
    }


    // in this case better directly
    for (int m = 0; m < 4; m++)
    {
        std::cout << "month: " << m + 1 << ", income: " << monthlyIncome[m] << std::endl;
    }


    // manipulators (page 154)
    std::cout << std::fixed << std::setprecision(6) << 17.23 << std::endl;       // manipulators for formatting

}
