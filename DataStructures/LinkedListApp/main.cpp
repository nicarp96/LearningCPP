#include <iostream>
#include <ctime>
#include <cstdlib>
#include "LinkedList.h"
int main() {
  std::cout << "Hello, World!" << std::endl;
  LinkedList myList;
  srand(time(nullptr));

  for (int i = 0; i < 60; ++i) {
    int data = rand() %100+1;
    myList.add(data);
  }
  myList.printList();
  cout<<endl<<endl;
  while(myList.contains(66)) {
    myList.set(1000,myList.find(66));
  }
  myList.printList();

  return 0;
}
