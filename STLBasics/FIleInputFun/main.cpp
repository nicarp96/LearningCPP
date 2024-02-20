#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    ifstream input;
    input.open("input.txt");
    int numFile;
    vector<int> numbers;
    int sum = 0;
    while(!input.eof()){
        input >> numFile;
        numbers.push_back(numFile);
        sum += numFile;
    }
    cout << endl;
    for (auto i : numbers)
    {
        cout << i << endl;
    }

    cout << "The sum is " << sum;
    input.close();
    return 0;
}