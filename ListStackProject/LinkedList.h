//
// Created by nicarp on 2/1/24.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "List.h"
#include <iostream>
using namespace std;

class Node {
public:
    Node(int data, Node *next) {
        this->data=data;
        this->next=next;
    }
    int getData() const {
        return data;
    }
    void setData(int data) {
        this->data=data;
    }
    Node* getNext() const {
        return  next;
    }
    void setNext(Node* next) {
            this->next=next;
    }

private:
    int data;
    Node* next;
};
class LinkedList: public List {
public:
    LinkedList() {
        mNumElements=0;
        mHead=nullptr;
    }
    virtual ~LinkedList() {
        makeEmpty();
    }
    void add(int newEntry) override {
        Node *newNode=new Node(newEntry,mHead);
        mHead=newNode;
        mNumElements++;
    }

    void add(int newEntry, int position) override {
        Node *newNode=new Node(newEntry,mHead);
        if(position >= mNumElements+1||position<0) {
            cout<<"Can't add at this position"<<endl;
            return;
        }
        if(position==0) {
            newNode->setNext(mHead);
            mHead=newNode;
        }
        else {
            Node* nodeBefore= mHead;
            Node* nodeAfter;
            for (int i = 0; i < position - 1; ++i) {
                nodeBefore=nodeBefore->getNext();
            }
            nodeAfter=nodeBefore->getNext();
            newNode->setNext(nodeAfter);
            nodeBefore->setNext(newNode);
        }
        mNumElements++;
    }

    void set(int newEntry, int position) override {
        Node* walker = mHead;
        if(position>=mNumElements||position<0) {
            cout<<"Can't add at this position"<<endl;
        }
        for (int i = 0; i < position; ++i) {
                walker=walker->getNext();
        }
        walker->setData(newEntry);
    }

    bool contains(int entry) override {
        bool value =false;
        value = find(entry) != -1;
        return value;
    };

    int find(int entry) override {
        int foundIndex = -1;
        int indexCounter = 0;
        Node* walker=mHead;
        while(walker!=nullptr) {
            if(walker->getData()==entry) {
                foundIndex=indexCounter;
                break;
            }
            walker=walker->getNext();
            indexCounter++;
        }
        return foundIndex;
    }

    int remove(int position) override {
        if(position>=mNumElements||position<0) {
            cout<<"Can't add at this position"<<endl;
            return 0;
        }
        int dataToReturn=0;
        if(position==0) {
            Node* temp=mHead;
            dataToReturn=temp->getData();
            mHead=mHead->getNext();
            delete temp;
        }
        else {
            Node* nodeBefore=mHead;
            Node* nodeToRemove;
            Node* nodeAfter;
            for (int i = 0; i < position -1; ++i) {
                nodeBefore=nodeBefore->getNext();
            }
            nodeToRemove=nodeBefore->getNext();
            dataToReturn=nodeToRemove->getData();
            nodeAfter=nodeToRemove ->getNext();
            nodeBefore->setNext(nodeAfter);
            delete nodeToRemove;
        }
        mNumElements--;
        return dataToReturn;
    };

    void makeEmpty() override {
        Node* temp;
        while (mHead!=nullptr) {
            temp=mHead;
            mHead=mHead->getNext();
            delete temp;
        }
        mNumElements=0;
    };

    int size() const override {
        return mNumElements;
    }

    bool isEmpty() const override {
         return mNumElements==0;
    }

    void printList() override {
        Node* walker=mHead;
        while(walker!=nullptr) {
            cout<<walker->getData()<<endl;
            walker=walker->getNext();
        }
    }

private:
    Node* mHead;
    int mNumElements;
};

#endif //LINKEDLIST_H
