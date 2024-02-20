#include <iostream>
#include <vector>
#include "Player.h"
#include "Mage.h"
#include "Warrior.h"
#include "Priest.h"
#include <string>
using namespace std;



int main(){
    int playerClass=100;
    vector<Player*> characters;
    while(playerClass!=0){
    cout << "Which of the following would you like?\n"
         << "\t1 - Create a Warrior\n\t2 - Create a Priest\n\t3 - Create a Mage\n\t"
         << "0 - finisg creating player characters\n";
    cin >> playerClass;
    if(playerClass==0){
        break;
    }
    string name;
    cout << "What would you like to name your character?"<<endl;
    cin >> name;
    Race race;
    int temp1;
    cout << "Now, which race do you want?\n"
         << "\t1 - Human\n\t2 - Elf\n\t3 - Dwarf\n\t4 - Orc\n\t5 - Troll\n";
    cin >> temp1;
    switch (temp1)
    {
    case 1:
        race = HUMAN;
        break;
    case 2:
        race = ELF;
        break;
    case 3:
        race = DWARF;
        break;
    case 4:
        race = ORC;
        break;
    case 5:
        race = TROLL;
        break;
    default:
        break;
    }
    Player *character;
    switch (playerClass)
    {
    case 1:
        character = new Warrior(name, race, 200, 0);
        break;
    case 2:
        character = new Priest(name, race, 100, 200);
        break;
    case 3:
        character = new Mage(name, race, 150, 150);
        break;
    default:
        break;
    }
    characters.push_back(character);
    }
    for(Player* x:characters){
        cout << "I'm an " << x->whatRace() << " and my attack is: " << x->attack()<<endl;
        delete x;
        x = nullptr;
    }
    characters.clear();
    return 0;
}