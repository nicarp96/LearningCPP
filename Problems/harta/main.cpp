#include <iostream>
using namespace std;

void removeSpaces(string &orig);

int main(){
    int n, m;
    cin >> n >> m;
    int **map = new int*[n];
    for (int i = 0; i < n; i++)
    {
        map[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        string temp;
        getline(cin, temp);
        removeSpaces(temp);
        cout << temp<<endl;
    }

    return 0;
}

void removeSpaces(string &orig)
{
    string temp ="";
    for (int i = 0; i < orig.size(); i++)
    {
        if(orig[i]!=' '){
            temp += orig[i];
        }
    }
    orig = temp;
}
