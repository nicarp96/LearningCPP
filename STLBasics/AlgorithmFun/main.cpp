#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

void fillVector(vector<int>& myVector,int rangeNumber);
void printVector(const vector<int> myVector);
void countFives(const vector<int> myVector,int searchedNr);

int main()
{
    cout << "Input maximum ranged number- > ";
    int max;
    cin >> max;
    cout << "input number your searching for -> ";
    int temp;
    cin >> temp;
    vector<int> numbers;
    fillVector(numbers,max);
    printVector(numbers);
    countFives(numbers,temp);
    replace(numbers.begin(), numbers.end(), 5, 99);

    printVector(numbers);
    countFives(numbers,temp);
    return 0;
}

void fillVector(vector<int> &myVector,int rangeNumber) {
    srand(time(nullptr));
    int temp;
    for (int i = 0; i < 20; i++)
    {
        temp = rand() % rangeNumber + 1;
        myVector.push_back(temp);
    }
}

void printVector(const vector<int> myVector) {
    for (auto x : myVector)
    {
        cout << x << endl;
    }
}

void countFives(const vector<int> myVector,int searchedNr) {
    int nr = count(myVector.begin(), myVector.end(),searchedNr);
    cout << "number of "<<searchedNr<<": " << nr << endl;
}
