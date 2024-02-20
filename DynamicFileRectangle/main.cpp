#include <fstream>
#include <iostream>
#include <vector>
#include "Rectangle.h"
using namespace std;

void fillVector(vector<Rectangle *> &rectsVec, ifstream &input);
void fillOuput(vector<Rectangle *> &rectsVec, ofstream &output);
int main()
{
    vector<Rectangle *> rectsVec;
    ifstream input;
    input.open("rectangles.txt");
    if(!input){
        cout << "Problem reading the file.Bailling out" << endl;
        return 1;
    }
    fillVector(rectsVec, input);
    input.close();
    ofstream output;
    output.open("output.txt");
    fillOuput(rectsVec, output);
    output.close();

    return 0;
}

void fillVector(vector<Rectangle *> &rectsVec, ifstream &input) {
    double length, width;
    while(!input.eof()){
        input >> length >> width;
        rectsVec.push_back(new Rectangle(length, width));
    }
}

void fillOuput(vector<Rectangle *> &rectsVec, ofstream &output) {
     for (auto rect : rectsVec)
    {
        output << "Perimeter: " << rect->perimeter() << " Area: " << rect->area() << endl;
        delete rect;
        rect = nullptr;
    }
    rectsVec.clear();
}
