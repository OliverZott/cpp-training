/**
 * page 258
 *
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


struct Person2              // type-definition
{
    string name_;
    int alter_;
    string ort_;

    void drucke();          //function as method
    void drucke_soph(std::ostream& os);     // sophisticated print-function
    string gruss();
};

void Person2::drucke()       // function separated
{
    cout << name_ << " (" << alter_ << " from " << ort_ << ") \n";       // p.  ...not necessary in method
}

// sophisticated print function with standard output parameter
void Person2::drucke_soph(std::ostream& os)
{
    os << name_ << " (" << alter_ << ") from " << ort_ << endl;
}

string Person2::gruss()
{
    return "Hallo " + this->name_ + " from " + ort_;      // this is basically the same (referes to current instance)
}
