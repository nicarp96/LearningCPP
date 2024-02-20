#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H
#include <iostream>
#include "List.h"
using namespace std;
class ArrayList : public List
{
public:
    ArrayList(int s = 16) : MAX_SIZE(s)
    {
        mArray = new int[MAX_SIZE];
        mNumElements=0;
    }
    void add(int newEntry)
    {
        if (mNumElements >= MAX_SIZE)
        {
            cout << "List is full." << endl;
            return;
        }
        mArray[mNumElements] = newEntry;
        mNumElements++;
    }
    void add(int newEntry, int position){
        if (mNumElements >= MAX_SIZE)
        {
            cout << "List is full." << endl;
            return;
        }
        if(position<0||position>mNumElements){
            cout << "Out of range"<<endl;
            return;
        }
        for (int i = mNumElements; i >position; i--)
        {
            mArray[i] = mArray[i - 1];
        }
        mArray[position] = newEntry;
        mNumElements++;
    }
    void set(int newEntry, int position){

        if(position<0||position>mNumElements){
            cout << "Out of range"<<endl;
            return;
        }
        mArray[position] = newEntry;
    }

    bool contains(int entry){
        bool found;
        for (int i = 0; i < mNumElements; i++)
        {
            if(mArray[i]==entry){
                found = true;
                break;
            }
        }
        return found;
    }
    int find(int entry){
        int foundIndex = -1;
        for (int i = 0; i < mNumElements; i++)
        {
            if(mArray[i]==entry){
                foundIndex = i;
                break;
            }
        }
        return foundIndex;
        }
    int remove(int position){
        int value = -1;

        if(position<0||position>=mNumElements){
            cout << "Out of range"<<endl;
            return -1;
        }
        for (int i = position; i<mNumElements-1 ; i++)
        {
            mArray[i] = mArray[i + 1];
        }
        mNumElements--;
        return value;
    }
    void makeEmpty(){
        mNumElements = 0;
    }
    int size() const{
        return mNumElements;
    }
    bool isEmpty(){
        return mNumElements == 0;
    }
    void printList(){
        for (int i = 0; i < mNumElements; i++)
        {
            cout << mArray[i] << endl;
        }
    }

private:
    int *mArray;
    const int MAX_SIZE;
    int mNumElements;
};


#endif
