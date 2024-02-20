#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
     const int ARR_SIZE = 3;
     Rectangle *myRectanglesPtr[ARR_SIZE];
     myRectanglesPtr[0] = new Rectangle(8.5, 7.2);
     myRectanglesPtr[1] = new Rectangle(18.4, 15.6);
     myRectanglesPtr[2] = new Rectangle(223.2, 69.420);
     for (int i = 0; i < ARR_SIZE; i++)
     {
          cout << "Area: "<<myRectanglesPtr[i]->area()<<"\nPerimeter: "<<myRectanglesPtr[i]->perimeter()<<endl;
          delete myRectanglesPtr[i];
          myRectanglesPtr[i] = nullptr;
     }

     return 0;
}
