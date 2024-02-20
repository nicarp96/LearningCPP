#ifndef ALIEN_H
#define ALIEN_H

class Alien
{
private:
    int weight;
    int height;
    char gender;

public:
    Alien(int weight,int height,char gender);
    int getWeight() const;
    int getHeight() const;
    char getGender() const;
    int getPrestige() const;
    bool operator==(const Alien &other) const;
    bool operator!=(const Alien &other) const;
    bool operator>=(const Alien &other) const;
    bool operator>(const Alien &other) const;
    bool operator<=(const Alien &other) const;
    bool operator<(const Alien &other) const;
    Alien operator=(const Alien &other) const;
    Alien operator+(const Alien &other) const;

};

#endif
