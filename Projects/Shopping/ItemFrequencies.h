#ifndef ITEM_FREQ_H
#define ITEM_FREQ_H
#include <vector>
#include <string>
using namespace std;

class ItemFrequinces{
    public:
        int checkExistence(string item);
        void addItem(string item);
        ItemFrequinces();
        void incrFreq(int index);
        void printAll() const;

    private:
        vector<string> items;
        vector<int> freq;
};

#endif