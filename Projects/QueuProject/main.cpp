#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> names;
    names.push("John");
    names.push("Bob");
    names.push("Dereck");
    names.push("Rose");
    names.push("DIck");
    names.push("Leonard");
    names.push("Antonio");
    while(!names.empty()){
        cout << names.front()<<endl;
        names.pop();
    }

    return 0;
}