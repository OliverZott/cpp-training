/**
 * String Example
 * (page 144)
 *
 * - string
 *
 * @author Oliver Zott
 * @date 2019-12-06
 */

 #include <string>
 #include <iostream>


void eingabe(
        std::string &name,
        unsigned &gebJahr)
{
    std::cout << "Name: ";
    std::getline(std::cin, name);       // "getline" to read with white-spaces!
    if (name.length() == 0)
    {
        std::cout << "Empty name-string!\n";
        exit(1);
    }
    std::cout << "Year of birth: ";
    std::cin >> gebJahr;                // only ready till next white-space

    std::cout << "Your Name: " << name << ", year of birth: " << gebJahr << std::endl;
}
