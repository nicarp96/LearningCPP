#include <iostream>
#include "ArrayList.h"
using namespace std;

int main(){
    ArrayList myList;
    for (int i = 0; i < 15; i++)
    {
        myList.add(i * 10);
    }
    myList.printList();

    for (int i = 0; i < 15; i++)
    {
        myList.add(i * 10);
    }
    return 0;
}
