#include "Warrior.h"
using namespace std;
Warrior::Warrior(string name, Race race, int hitPoints, int magicPoints) : Player(name, race,hitPoints, magicPoints){
 };
 string Warrior::attack() const{
     return  "I will destroy you with my sword, foul demon !";
 }