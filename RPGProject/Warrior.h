#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"

class Warrior: public Player{
    public:
        Warrior(string name, Race race, int hitPoints, int magicPoints);
        string attack() const;
};

#endif