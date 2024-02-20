#include <iostream>
#include <string>
#include <stdexcept>
#include "Dog.h"
using namespace std;

int main(){
    try{
    Dog German("German Shepard");
    cout<<German.getBreed();
    Dog Dwarf("Dwarf");
    cout<<Dwarf.getBreed();
    Dog Poddle("Poddle");
    cout<<Poddle.getBreed();
}
catch(const runtime_error& err){
    cout<<err.what();
}
    return 0;
}