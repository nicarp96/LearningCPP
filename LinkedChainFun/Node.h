#ifndef NODE_H
#define NODE_H

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



#endif
