#include <iostream>
using namespace std;

int main(){
    int myInt = 244;
    int *somePtr = &myInt;
    cout << "MyInt is originally -> " << myInt << endl;
    cout << "somePtr is -> " << somePtr<< endl;
    cout << "somePtr dereferenced -> " << *somePtr<< endl;
    *somePtr = 100;
    cout << "MyInt is originally -> " << myInt << endl;

    double myDouble = 3.14;
    double *doublePtr = &myDouble;
    cout << "doublePtr contents are -> " << doublePtr << endl;
    cout << "doublePtr points to ->" << *doublePtr << endl;
        cout << "doublePtr points to ->" << *(*(&doublePtr)) << endl;


    return 0;
}