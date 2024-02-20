#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <map>
#include <string>
using namespace std;
class Dictionary
{
private:
    map<string, string> dictionary;

public:
    void addDefinition(string word, string definition);
    string getDefinition(string word) const;
    void printAll() const;
};

#endif
