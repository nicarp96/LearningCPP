//
// Created by nicarp on 2/2/24.
//

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include <iostream>
using namespace std;
#include "Stack.h"
class ArrayStack : public Stack {
private:
    int* mArray;
    const int MAX_SIZE;
    int top;
public:
    ArrayStack(int s = 16) : MAX_SIZE(s) {
        top=-1;
        mArray= new int[MAX_SIZE];
    }
    void push(int newEntry) override {
        if(top<MAX_SIZE-1) {
            top++;
            mArray[top]=newEntry;
        }
        else {
    std::cout<<"Stack is full"<<endl;
        }
    }

    int pop() override {
        int data = 0;
        if(!isEmpty()) {
            data=mArray[top];
            top--;
        }
        else {
            cout<<"Stack is empty"<<endl;
        }
        return data;
    }

    int peek() const override {
        int data = 0;
        if (!isEmpty()) {
            data = mArray[top];
        }
        else {
            cout<<"Stack is empty"<<endl;
        }
        return data;
    }

    bool isEmpty() const override {
        return top ==-1;
    }

    void makeEmpty() override {
        top=-1;
    }
};


#endif //ARRAYSTACK_H
