#include <iostream>
#include <stack>
#include <string>
using namespace std;
void storeReverse(string str, stack<char> &reverseString);
bool isPalindrome(string str);
void printAnswer(string str);

int main()
{
    string tests[5]{"eye", "true", "racecar", "civic", "bob"};
    for(string s : tests){
        printAnswer(s);
    }
}

void storeReverse(string str, stack<char> &reverseString) {
    for(char x:str){
        reverseString.push(x);
    }
}

void printAnswer(string str) {
    cout << "Is " << str << " a palindrome?\t" << boolalpha << isPalindrome(str)<<endl;
}

bool isPalindrome(string str) {
    bool answer = true;
    stack<char> reverseString;
    storeReverse(str, reverseString);
    if(str.length()==reverseString.size()){
        for (auto x : str)
    {
        char c = reverseString.top();
        if (x != c)
        {
            answer = false;
            break;
        }
        reverseString.pop();
    }
    }
    else{
        answer = false;
    }

    return answer; 
    }
