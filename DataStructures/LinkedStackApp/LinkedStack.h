#ifndef LINKED_STACK_H
#define LINKED_STACK_H
#include "Stack.h"
#include <iostream>
using namespace std;
class Node
{
private:
    int data;
    Node *next;

public:
    Node(int data, Node *next){
        this->data = data;
        this->next = next;
    }
    void setData(int data){
        this->data = data;
    }
    void setNext(Node *next){
        this->next = next;
    }
    int getData() const{
        return data;
    }
    Node *getNext() const{
        return next;
    }
};

class LinkedStack: public Stack{
    public:
        LinkedStack(){
            top = nullptr;
        }
        virtual ~LinkedStack(){
            makeEmpty();
        }
        void push(int newEntry){
            Node *newNode = new Node(newEntry, top);
            top = newNode;
        }
        int pop(){
            int data = 0;
            if (!isEmpty())
            {
                Node *temp = top;
                data = temp->getData();
                top = top->getNext();
                delete temp;
            }
            else{
                cout << "Stack is empty" << endl;
            }
            return data;
        }
        int peek() const{
            int data = 0;
            if(!isEmpty()){
                data = top->getData();
            }
            else{
                cout << "Stack is empty" << endl;
            }
            return data;
        }
        bool isEmpty() const{
            return top == nullptr;
        }
        void makeEmpty(){
            Node *temp;
            while (top!=nullptr){
                temp = top;
                top = top->getNext();
                delete temp;
            }
        }

    private:
      Node *top;
};

#endif
