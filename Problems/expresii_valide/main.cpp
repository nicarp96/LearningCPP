#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

int acol=0, sqrbr=0, roundbr=0;

bool isBalanced(string str){
    stack<char> temp;
    bool answer = false;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if(c=='('){
            temp.push(')');
            roundbr++;
        }
        else if(c=='['){
            temp.push(']');
            sqrbr++;
        }
        else if(c=='{'){
            temp.push('}');
            acol++;
        }
        else if (c==temp.top())
        {
            temp.pop();
        }
    }
    if(temp.empty()){
        answer = true;
    }
    return answer;
}


    int main()
{
    ifstream fin("expresii.in");
    ofstream fout("expresii.out");
    int n;
    fin >> n;
    stack<char> temp;
    for (int i = 0; i < n; i++)
    {
        acol = 0;
        sqrbr = 0;
        roundbr = 0;
        string str;
        fin >> str;
        if(isBalanced(str)){
            fout << "DA (" << roundbr << ") [" << sqrbr << "] {" << acol << "}" << endl;
        }
        else{
            fout << "NU" << endl;
        }
    }
    fin.close();
    fout.close();
}
