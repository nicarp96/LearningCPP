#include <fstream>
#include <iostream>
#include <string>
#include "ItemFrequencies.h"
using namespace std;

int main(){
    ifstream file;
    file.open("shopping.txt");
    if(!file){
        cout << "Problem opening file.Bailing out"<<endl;
        return 1;
    }
    ItemFrequinces itemFreq;

    while (!file.eof())
    {
        string item;
        getline(file, item);
        int index = itemFreq.checkExistence(item);
        if (index!= -1){
            itemFreq.incrFreq(index);
        }
        else{
            itemFreq.addItem(item);
        }
    }
    itemFreq.printAll();

    return 0;
}