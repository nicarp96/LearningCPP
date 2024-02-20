#include <iostream>
#include "LinkedStack.h"
using namespace std;

void printStack(LinkedStack &orig);
int  main()
{
    LinkedStack stack;
    for (int i = 0; i < 44; i++)
    {
        stack.push(i * 0.75);
    }
   
    cout << endl;
    printStack(stack);
    cout << endl;

    while (!stack.isEmpty())
    {
        cout << stack.pop() << endl;
    }

    return 0;
}

void printStack(LinkedStack &orig)
{
    LinkedStack temp;
    while (!orig.isEmpty())
    {
        temp.push(orig.peek());
        cout << orig.pop() << " ";
    }
    while (!temp.isEmpty())
    {
        orig.push(temp.pop());
    }
}
