#include "Alien.h"
#include <ctime>
#include <cstdlib>
Alien::Alien(int weight, int height, char gender)
{
    this->weight = weight;
    this->height = height;
    this->gender = gender;
}

int Alien::getWeight() const
{
    return weight;
}

int Alien::getHeight() const
{
    return height;
}

char Alien::getGender() const
{
    return gender;
}

int Alien::getPrestige() const
{
    int genderP;
    if (gender=='F')
    {
        genderP = 3;
    }
    else{
        genderP = 2;
    }
    return weight * genderP * height;

}


bool Alien::operator==(const Alien &other) const {
    return this->getPrestige() == other.getPrestige();
}

bool Alien::operator!=(const Alien &other) const {
    return this->getPrestige() != other.getPrestige();
}

Alien Alien::operator=(const Alien &other) const {
    return Alien(other.weight, other.height, other.gender);
}

Alien Alien::operator+(const Alien &other) const {
    srand(time(nullptr));
    int random = rand() % 10 +1;
    char gndr;
    if (random == 1 || random == 2 || random == 3)
    {
        gndr = 'F';
    }
    else{
        gndr = 'M';
    }
    return Alien((weight + other.weight) / 2, (height + other.height) / 2,gndr);
}
bool Alien::operator>=(const Alien &other) const{
    return this->getPrestige() >= other.getPrestige();
}
bool Alien::operator>(const Alien &other) const{
    return this->getPrestige() > other.getPrestige();

}
bool Alien::operator<=(const Alien &other) const{
    return this->getPrestige() <= other.getPrestige();

}
bool Alien::operator<(const Alien &other) const{
    return this->getPrestige() < other.getPrestige();

}
