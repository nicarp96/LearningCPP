#include <iostream>
#include "Dog.h"
using namespace std;

int main(){
    Dog *myDog = new Dog("Bim", "German Shepard");
    Dog *yourDog = new Dog("Rover", "Poddle");

    cout << "using arrow member acces:" << endl;
    cout << myDog->getName() << " - " << myDog->getBreed()<< endl;;
    cout << yourDog->getName() << " - " << yourDog->getBreed()<< endl;;
    cout << endl;
    cout << "using dereferencing and the dot operator: " << endl;
    cout << (*myDog).getName() << " - " << (*myDog).getBreed() << endl;
    cout << (*yourDog).getName() << " - " << (*yourDog).getBreed() << endl;
    delete myDog;
    delete yourDog;
    myDog = nullptr;
    yourDog = nullptr;

    return 0;
}