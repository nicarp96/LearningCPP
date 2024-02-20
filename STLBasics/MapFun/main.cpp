#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string, string> contacts;
    string name, number;
    getline(cin, name);
    while(true){
        getline(cin, name);
        getline(cin, number);
        if(name=="0"){
            break;
        }
        else{
            contacts[name] = number;
        }
    }
    for(auto x :contacts){
        cout << x.first << "=" << x.second << endl;
    }

    return 0;
}