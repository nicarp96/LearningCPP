#include <iostream>
using namespace std;

int main(){
    int n, m ,x;
    char c;
    cin >> n >> m;
    cin >> c >> x;
    int jucatori[n];
    for (int i = 0; i < n; i++)
    {
        jucatori[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        int id_temp, scor_temp;
        cin >> id_temp >> scor_temp;
        jucatori[id_temp-1 ] += scor_temp;
    }
    switch (c)
    {
    case '>':
        for (int i = 0; i < n; i++)
        {
            if(jucatori[i]>x){
                cout << i + 1 << "(" << jucatori[i] << ") ";
            }
        }
        break;
    
    case '<':
        for (int i = 0; i < n; i++)
        {
            if(jucatori[i]<x){
                cout << i + 1 << "(" << jucatori[i] << ") ";
            }
        }
        break;

    case '!':
        for (int i = 0; i < n; i++)
        {
            if(jucatori[i]!=x){
                cout << i + 1 << "(" << jucatori[i] << ") ";
            }
        }
        break;

    case '=':
        for (int i = 0; i < n; i++)
        {
            if(jucatori[i]==x){
                cout << i + 1 << "(" << jucatori[i] << ") ";
            }
        }
        break;
    default:
        cout << "ERROR";
        break;
    }

    return 0;
}