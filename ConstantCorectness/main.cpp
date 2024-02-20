#include <iostream>
using namespace std;

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();
void noChange(const double *const doublePtr);
int main()
{
    noConst();
    cout << endl;
    cp2ncd();
    cout << endl;
    ncp2cd();
    cout << endl;
    cp2cd();
    cout << endl;
    double *myPtr = new double(1868.98);
    noChange(myPtr);
    delete myPtr;
    return 0;
}

//No const ptr and no const data
void noConst() {
    cout << endl<< "In noConst\n";
    int *myPtr = new int(330);
    cout << endl<< "\torig value:" << endl
         << *myPtr;
    *myPtr = 220;
    cout << endl<< "\tnew value:" << endl
         << *myPtr;
    myPtr = new int(110);
    cout << endl<< "\ttotally new integer:" << endl
         << *myPtr;
    delete myPtr;
    myPtr = nullptr;
}
//constant pointer and non-constat data
void cp2ncd() {
    cout << "In cp2ncd:\n";
    int *const myPtr = new int(500);
    
    cout<< endl << "\torig value:" << endl
         << *myPtr;
    *myPtr = 400;

    cout << endl<< "\tnew value:" << endl
         << *myPtr;
   // myPtr = new int(200); ERROR pointer is const

    cout << endl<< "\ttotally new integer:" << endl
         << "can't make new int";
    delete myPtr;
}

void ncp2cd() {
    cout << "In ncp2cd:\n";
    const int *myPtr = new int(299);

    cout << endl<< "\torig value:" << endl
         << *myPtr;
    
    cout << endl<< "\tnew value:" << endl
         <<" can't change value";
    myPtr = new int(200);

    cout << endl<< "\ttotally new integer:" << endl
         << *myPtr;
    delete myPtr;
    myPtr = nullptr;
}

void cp2cd() {
    cout << "In cp2cd:\n";
    const int *const myPtr = new int(80);

    cout << endl<< "\torig value:" << endl
         << *myPtr;

    cout << endl<< "\tnew value:" << endl
         <<" can't change value";


    cout << endl<< "\ttotally new integer:" << endl
         << "can't make new int";
    delete myPtr;


}

void noChange(const double *const doublePtr) {
    cout <<endl<< *doublePtr;
}
