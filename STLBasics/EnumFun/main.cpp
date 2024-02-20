#include <iostream>
using namespace std;

int main(){
    enum Directions  {UP, DOWN, LEFT, RIGHT, STANDING};
    Directions myDirec = STANDING;
    if(myDirec==UP){
        cout << "up!";
    }
    else if(myDirec==DOWN){
        cout << "down!";
    }
    else if(myDirec==LEFT){
        cout << "left!";
    }
    else if(myDirec==RIGHT){
        cout << "right!";
    }

    else if(myDirec==STANDING){
        cout << "standing!";
    }
    return 0;
}