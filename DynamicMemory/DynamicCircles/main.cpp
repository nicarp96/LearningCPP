#include <iostream>
#include "Circle.h"
using namespace std;
int main()
{
    int nrCirc;
    cout << "How many circles do you want? -> ";
    cin >> nrCirc;
    Circle **circlesArrayPtr = new Circle *[nrCirc];
    cout << endl;
    for (int i = 0; i < nrCirc; i++)
    {
        int r;
        cout << "Input radius for circle " << i + 1<<" -> ";
        cin >> r;
        circlesArrayPtr[i] = new Circle(r);
        cout << endl;
    }
    for (int i = 0; i < nrCirc; i++)
    {
        cout << "Circumference for circle " << i + 1 << " is " << circlesArrayPtr[i]->circumference()<<endl;
        cout << "Area for circle " << i + 1 << " is " << circlesArrayPtr[i]->area()<<endl;
        delete circlesArrayPtr[i];
        circlesArrayPtr[i] = nullptr;
    }
    delete[] circlesArrayPtr;

    return 0;
}