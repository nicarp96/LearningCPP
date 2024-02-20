#include "ItemFrequencies.h"
#include <iostream>
#include <iomanip>
using namespace std;
int ItemFrequinces::checkExistence(string item)
{
    for (int i = 0; i < items.size(); i++)
    {
        if(item==items[i]){
            return i;
        }
    }
    return -1;
}

void ItemFrequinces::addItem(string item) {
    items.push_back(item);
    freq.push_back(1);
}

ItemFrequinces::ItemFrequinces() {}

void ItemFrequinces::incrFreq(int index) {
    freq[index]= freq[index]+1;
}

void ItemFrequinces::printAll() const {
    for (int i = 0; i < (int)items.size(); i++)
    {
        cout <<setw(15)<< items[i]  << "\t\t" << freq[i] << endl;
    }
}
