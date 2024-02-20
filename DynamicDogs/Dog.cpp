#include "Dog.h"

Dog::Dog(string name, string breed) {
    this->name = name;
    this->breed = breed;
}

string Dog::getBreed() const noexcept { return breed; }

string Dog::getName() const noexcept { return name; }
