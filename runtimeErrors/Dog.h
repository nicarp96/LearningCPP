#ifndef DOG_H
#define DOG_H
#include <string>
using std::string;
class Dog{
  public:
    Dog(string breed);
    string getBreed() const;
  private:
    string breed;  
};



#endif