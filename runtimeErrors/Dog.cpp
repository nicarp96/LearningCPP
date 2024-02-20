#include <stdexcept>
#include "Dog.h"
using namespace std;
Dog::Dog(string breed){
    if(breed != "Poddle"){
        this->breed = breed;
    }
    else{
        throw runtime_error("Poddle? That's not a real dog!");
    }
}
string Dog::getBreed() const{
    return this->breed;
}