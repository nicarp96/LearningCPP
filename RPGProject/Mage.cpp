#include "Mage.h"
using namespace std;

Mage::Mage(string name, Race race, int hitPoints, int magicPoints):Player(name,race,hitPoints,magicPoints){

};
string Mage::attack() const{
    return "I will crush you with the power of my arcane";
}