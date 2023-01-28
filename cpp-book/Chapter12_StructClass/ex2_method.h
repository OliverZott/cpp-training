#ifndef EX2_METHOD_H_INCLUDED
#define EX2_METHOD_H_INCLUDED

#include <string>


struct Person2
{
    std::string name_;
    int alter_;
    std::string ort_;

    void drucke();
    void drucke_soph(std::ostream& os);
    std::string gruss();
};


void drucke();


#endif // EX2_METHOD_H_INCLUDED
