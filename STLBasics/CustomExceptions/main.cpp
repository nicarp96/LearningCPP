#include <iostream>
#include "AngryCatException.h"
using namespace std;

void giveTreats(int numOfTreats);

int main(){
    int numOfTreats=0;
    cout<<"how many treats you want to give to the cat?"<<endl;
    cin>>numOfTreats;
    try{
        giveTreats(numOfTreats);
    }
    catch(const AngryCatException& err){
        cout<<err.what();
    }

    return 0;
}
void giveTreats(int numOfTreats){
    if(numOfTreats<3){
        throw AngryCatException();
    }

    else if(numOfTreats<7){
        throw AngryCatException("Cat is not satisfied!");
    }
    cout<<"Cat is happy";
}