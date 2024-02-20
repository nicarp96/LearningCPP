#include <iostream>
using namespace std;

int main(){
     int ARR_SIZE ;
     cout << "Input the array size -> ";
     cin >> ARR_SIZE;

     int *myArrayPtr = new int[ARR_SIZE];

     for (int i = 0; i < ARR_SIZE; i++)
     {
         myArrayPtr[i] = i * 2;
    }
    for (int i = 0; i < ARR_SIZE; i++)
    {
        cout << myArrayPtr[i] << endl;
    }
    delete[] myArrayPtr;
    myArrayPtr = nullptr;

    return 0;
}