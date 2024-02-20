#include "Priest.h"
using namespace std;

Priest::Priest(string name, Race race, int hitPoints, int magicPoints):Player(name,race,hitPoints,magicPoints){
}

string Priest::attack() const{
    return "I will assault you with Holy Wrath!";
}