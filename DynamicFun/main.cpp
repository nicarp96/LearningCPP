#include  <iostream>
using namespace std;

int main(){
    int *myInt = new int;
    *myInt = 19223;
    cout << *myInt << endl;
    delete myInt;
    myInt = nullptr;

    bool *myBoolPtr = new bool(true);
    cout << boolalpha << *myBoolPtr;
    delete myBoolPtr;
    myBoolPtr = nullptr;
    return 0;
}