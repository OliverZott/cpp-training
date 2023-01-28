#ifndef EX3_OVERLOADING_H_INCLUDED
#define EX3_OVERLOADING_H_INCLUDED

struct Person_overl             // type-definition
{
    std::string name_;
    int alter_;
    std::string ort_;

    void drucke();              //function as method

    std::ostream& drucke(std::ostream& os);
};

void drucke();

//std::ostream& Person_overl::drucke(std::ostream& os);
std::ostream& operator<<(std::ostream& os, Person_overl p);


#endif // EX3_OVERLOADING_H_INCLUDED
