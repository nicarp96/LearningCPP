#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream* numFile= new ifstream();
    ofstream* outFile = new ofstream();
    cout << "opening files..." << endl;
    numFile->open("numbers.txt");
    outFile->open("output.txt");
    if(!(*numFile)||!(*outFile)){
        cout << "there are some problem opening or reading the files...bailing out!" << endl;
        return 1;
    }
    int twiceNr = 0;
    while (!(numFile->eof()))
    {
        *numFile >> twiceNr;
        *outFile << twiceNr * 2 << endl;
    }
    cout << "closing files..." << endl;
    numFile->close();
    outFile->close();
    delete numFile;
    delete outFile;
    numFile = nullptr;
    outFile = nullptr;
    return 0;
}