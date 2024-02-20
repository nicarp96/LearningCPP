#ifndef LIST_STACK_H
#define LIST_STACK_H
#include "Stack.h"
#include "LinkedList.h"
class ListStack : public Stack{
    public:
        ListStack(){
        }
        void push(int newEntry){
            list.add(newEntry);

        }
        virtual ~ListStack(){
            list.makeEmpty();
        }
        int pop(){
            int data = 0;
            if (!isEmpty())
            {
                data = list.remove(0);

            }
            else{
                cout << "Stack is empty" << endl;
            }
            return data;
        }
        int peek(){
            int data = 0;
            if(!isEmpty()){
                data = list.remove(0);
                list.add(data);
            }
            else{
                cout << "Stack is empty" << endl;
            }
            return data;
        }
        bool isEmpty() const{
            return list.isEmpty();
        }
        void makeEmpty(){
            list.makeEmpty();
        }

    private:
        LinkedList list;
};


#endif
