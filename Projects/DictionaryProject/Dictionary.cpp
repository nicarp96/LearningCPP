#include "Dictionary.h"

#include <iostream>
using namespace std;
void Dictionary::addDefinition(string word, string definition)
{
        dictionary[word] = definition;
}

void Dictionary::printAll() const
{
    for (auto x : dictionary)
    {
        cout << x.first << ":\t" << x.second << endl;
    }
}

string Dictionary::getDefinition(string word) const
{
    auto x = dictionary.find(word);
    if (x == dictionary.end())
    {
        return "Not Found!\n";
    }
    else{
        return x->second+"\n";
    }
}
