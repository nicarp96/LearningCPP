#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void printFormatted(ofstream &output, int maxiter);

int main(){
    cout<<"Input a value -> ";
    int value;
    cin >> value;
    cout << "Writing to file" << endl;
    ofstream file;
    file.open("output.txt");

    printFormatted(file, value);
    file.close();
    cout << "Done";

    return 0;
}

void printFormatted(ofstream &output, int maxiter) {

    output << fixed << showpoint;
    cout << fixed << showpoint;

    for (int i = 1; i <= maxiter; i++)
    {
        output << setw(12) << setprecision(2) << i * 5.7575
              << setw(12) << setprecision(3) << i * 3.1419<<endl;
    cout << setw(12) << setprecision(2) << i * 5.7575
              << setw(12) << setprecision(3) << i * 3.1419<<endl;
    }
}
