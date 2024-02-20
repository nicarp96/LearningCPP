#include <iostream>
#include <memory>
using namespace std;

class Car{
    public:
        Car(string color, int numDoors);
        string getColor() const;
        int getNumDoors() const;

    private:
        string color;
        int numDoors;
};

int main()
{
    unique_ptr<Car> myCar = make_unique<Car>("Red", 4);
    cout << myCar->getColor() << endl
         << myCar->getNumDoors();
    return 0;
}

Car::Car(string color, int numDoors) {
    this->color = color;
    this->numDoors = numDoors;
}

string Car::getColor() const { return color; }

int Car::getNumDoors() const { return numDoors; }
