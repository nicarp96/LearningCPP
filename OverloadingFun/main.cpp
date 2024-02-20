#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle rect1(10, 20);
    Rectangle rect2(523, 122);
    Rectangle rect3(10, 20);
    Rectangle ResultRect;

    ResultRect = rect1 + rect2;

    cout << "rect1==rect3?\t" << boolalpha << (rect1 == rect3);

    cout << endl
         << "Result rectangle area: " << ResultRect.area();
    cout << endl << boolalpha << (rect2 != rect3);
    return 0;
}
