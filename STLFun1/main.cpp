#include <iostream>
#include <deque>
using namespace std;

void printDeque(deque<int> deck);

int main(){
    deque<int> myDeck;
    myDeck.push_back(5);
    myDeck.push_back(10);
    myDeck.push_back(15);
    cout << "First print" << endl;
    printDeque(myDeck);
    myDeck.push_front(20);
    myDeck.push_front(25);
    cout << "Second print" << endl;
    printDeque(myDeck);
}

void printDeque(deque<int> deck) {
    for (int x: deck){
        cout << x << endl;
    }
    cout << endl;
}
