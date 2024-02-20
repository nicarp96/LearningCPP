#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;

int main(){
   // Animal myAnimal("Sam", 94.5);
    Dog dog("Rover", 80, "Greyhound");
    Animal *dogPtr = new Dog("Fider", 115, "Golden Retriver");
  /*  cout <<"Make noise? "<< dogPtr->makeNoise() << endl;
    cout << "Animal Name: " << myAnimal.getName() << endl;
    cout << "Animal Weight: " << myAnimal.getWeight() << endl;
    cout << "Animal Noise: " << myAnimal.makeNoise()<<endl;
*/
    cout << "Dog Name: " << dog.getName() << endl;
    cout << "Dog Weight: " << dog.getWeight() << endl;
    cout << "Dog Noise: " << dog.makeNoise()<<endl;
    cout << "Dog eat : " << dogPtr->eat() << endl;
    dog.digHole();
    dog.chaseCat();
    delete dogPtr;
    dogPtr = nullptr;
    cout << endl
         << endl;
    Animal *catPtr = new  Cat("Fiona", 55.2);
    cout << "Cat name: " << catPtr->getName() << endl;
    cout << "Cat weight: " << catPtr-> getWeight() << endl;
    cout << catPtr->makeNoise()<< endl;
    (reinterpret_cast<Cat*>(catPtr))->chaseMouse() ;
    cout <<endl<< catPtr->eat()<< endl;
    delete catPtr;
    catPtr = nullptr;
    return 0;
}