#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

class Dog{
    public:
        Dog(string name, string breed);
        string getBreed() const noexcept;
        string getName() const noexcept;
    private:
        string name;
        string breed;
};

#endif