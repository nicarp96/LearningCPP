#include "Player.h"
using namespace std;


Player::Player(string name, Race race, int hitPoints, int magicPoints){
    this->name = name;
    this->race = race;
    this->hitPoints = hitPoints;
    this->magicPoints = magicPoints;
};
string Player::getName() const{
    return name;
};
Race Player::getRace() const{
    return race;
};
string Player::whatRace() const{
    switch(race){
        case 0:
            return "Human";
        case 1:
            return "Elf";
         case 2:
            return "Dwarf";
        case 3:
            return "Orc";
         case 4:
             return "Troll";
        }
};
int Player::getHitPoints() const{
    return hitPoints;
};
int Player::getMagicPoints() const{
    return magicPoints;
};
void Player::setName(string name){
    this->name = name;
};
void Player::setRace(Race race){
    this->race = race;
};
void Player::setHitPoints(int hitPoints){
    this->hitPoints = hitPoints;
};
void Player::setMagicPoints(int magicPoints){
    this->magicPoints = magicPoints;
};
