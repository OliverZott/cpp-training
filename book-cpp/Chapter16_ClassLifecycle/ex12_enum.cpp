/**
 * Chapter 16.12: enmu class
 *
 * - idea: distinct type / values  restricted to range of values
 * - use: if-else / switch-case
 * - implementation: scoped / not scoped
 *
 *
 * sources:
 *      - https://en.cppreference.com/w/cpp/language/enum
 *      - https://devdocs.io/cpp/language/enum
 *      - https://stackoverflow.com/questions/3342726/c-print-out-enum-value-as-text
 *
 * @author Oliver Zott
 * @date 2019-12-10
 */

#include <string>

using std::string;


// enum class defines specific value-range
enum class Ampelfarbe
{
    ROT, GELB, ROTGELB, GRUEN
};

struct Ampel
{
    Ampelfarbe farbe_;  // class-variable (ending underscore)
    Ampel(Ampelfarbe farbe, string name) : farbe_{farbe} {}
};

Ampel erzeugeAmpel(Ampelfarbe farbe, string ampelName)
{
    return Ampel{farbe, ampelName};
}


// implementing behaviour depending enum-object
string fahrschule(Ampel ampel)
{
    switch(ampel.farbe_)
    {
        case Ampelfarbe::ROT: return "stop\n";
        case Ampelfarbe::ROTGELB: return "get ready\n";
        case Ampelfarbe::GELB: return "stop\n";
        case Ampelfarbe::GRUEN: return "go\n";
    }
}


enum class Wochentag
{
    MO = 1, DI, MI, DO, FR, SA, SO          // auto incrementing other enum-items
};


