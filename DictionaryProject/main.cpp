#include <iostream>
#include "Dictionary.h"
using namespace std;

int main(){
    int choise;
    Dictionary user;
    bool end = true;
    while (end)
    {
        cout << "Type your selection\n1 - Add new defintion\n2 - Get the definition for the word\n3 - Print all "
                "definition\n0 - Exit\n";
        cin >> choise;
        string word, def;
        switch (choise)
        {
        case 1:
            cout << "Type word:\n";
            getline(cin>>ws, word);
            cout << "Type definition:\n";
            getline(cin>>ws, def);
            user.addDefinition(word, def);
            break;
        case 2:
            cout << "Type word:\n";
            getline(cin>>ws, word);
            cout << user.getDefinition(word);
            break;
        case 3:
            cout << endl;
            user.printAll();
        default:
            end = false;
            break;
        }
    }
}
