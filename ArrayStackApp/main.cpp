#include <iostream>
#include "ArrayStack.h"
using namespace std;
int main() {
    ArrayStack stack;
    ArrayStack temp;
    for (int i = 0; i < 16; i++)
    {
        stack.push(i);
    }
    while (!stack.isEmpty()) {
        temp.push(stack.peek());
        cout << stack.pop() << endl;
    }
    while(!temp.isEmpty()){
        stack.push(temp.pop());
    }
    cout << endl
         << endl;
    while (!stack.isEmpty())
    {

        cout << stack.pop() << endl;
    }
    return 0;
}
