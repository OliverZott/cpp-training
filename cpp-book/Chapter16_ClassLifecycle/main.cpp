#include <iostream>

#include "ex12_enum.h"


using namespace std;


int main()
{
    Ampel ampel1 = erzeugeAmpel(Ampelfarbe::ROT, "AX-001");
    Ampel ampel2 (Ampelfarbe::ROTGELB, "AX-002");

    // print enum: https://stackoverflow.com/questions/3342726/c-print-out-enum-value-as-text
    std::cout << "Ampel Object: " << &ampel1 <<endl;
    std::cout << "Ampel Object: " << static_cast<char>(ampel2.farbe_)<<endl;

    std::cout << fahrschule(ampel1);
    std::cout << fahrschule(ampel2);
}
