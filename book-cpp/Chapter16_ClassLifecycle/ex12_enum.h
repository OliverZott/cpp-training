#ifndef EX12_ENUM_H_INCLUDED
#define EX12_ENUM_H_INCLUDED

#include <string>

enum class Ampelfarbe
{
    ROT, GELB, ROTGELB, GRUEN
};

struct Ampel
{
    Ampelfarbe farbe_;  // class-variable (ending underscore)
    Ampel(Ampelfarbe farbe, std::string name) : farbe_{farbe} {}
};

Ampel erzeugeAmpel(Ampelfarbe farbe, std::string ampelName);

std::string fahrschule(Ampel ampel);

#endif // EX12_ENUM_H_INCLUDED
