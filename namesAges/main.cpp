#include <iostream>
#include  <fstream>
#include <string>
using namespace std;

int main(){
    ifstream namesFile;
    ifstream agesFile;
    ofstream outfile;
    string tempName;
    int tempAge;
    cout << "opening file..." << endl;
    namesFile.open("names.txt");
    agesFile.open("ages.txt");
    outfile.open("output.txt");
    if(!agesFile ||!namesFile){
        cout << "bailing out!" << endl;
        return 1;
    }
    while(!namesFile.eof()&&!agesFile.eof()){
        getline(namesFile, tempName);
        agesFile >> tempAge;
        outfile << tempName << " " << tempAge << endl;
    }
    cout << "closing file..." << endl;
    namesFile.close();
    agesFile.close();
    outfile.close();
    return 0;
}