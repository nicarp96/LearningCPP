#include <iostream>
#include "ListStack.h"
using namespace std;

void printStack(ListStack &orig);
int  main()
{
    ListStack stack;
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

void printStack(ListStack &orig)
{
    ListStack temp;
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
