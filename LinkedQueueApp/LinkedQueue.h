#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H
#include "Queue.h"
#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *next;
    Node *previous;

public:
    Node(int data, Node *next, Node* previous){
        this->data = data;
        this->next = next;
        this->previous = previous;
    }
    void setData(int data){
        this->data = data;
    }
    void setNext(Node *next){
        this->next = next;
    }
    void setPrevious(Node* previous){
        this->previous = previous;
    }
    Node *getPrevious() const{
        return previous;
    }
    int getData() const{
        return data;
    }
    Node *getNext() const{
        return next;
    }
};
class LinkedQueue : public Queue{
    public:
        LinkedQueue(){
            front = nullptr;
            back = nullptr;
        }
        virtual ~LinkedQueue(){
            makeEmpty();
        }
        void enqueue(int newEntry){
            Node *newNode = new Node(newEntry, back, nullptr);

            if(isEmpty()){
                front = newNode;
            }
            else{
                back->setPrevious(newNode);
            }
            back = newNode;
        }
        int dequeue(){
            int data = 0;
            if(!isEmpty()){
                Node *tempToRemove = front;
                data = front->getData();
                front = front->getPrevious();
                delete tempToRemove;
                if(front==nullptr){
                    back = nullptr;

                }
                else{
                    front->setNext(nullptr);
                }
            }
            else{
                cout << "Queue is empty" << endl;
            }
            return data;
        }
        int peekFront() const{
            int data = 0;
            if(!isEmpty()){
                data = front->getData();
            }
            else{
                cout << "Queue is empty" << endl;
            }
            return data;
        }
        bool isEmpty() const{
            return front == nullptr && back == nullptr;
        }
        void makeEmpty() {
            while(!isEmpty()){
                dequeue();
            }
        }

    private:
        Node *front;
        Node *back;
};


#endif
