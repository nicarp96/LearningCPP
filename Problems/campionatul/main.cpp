#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct country{
        string name;
        int score;
    };

    bool compareByScore(const country &a, const country &b);
    bool compareByName(const country &a, const country &b);
    int main()
    {
        int n;
        cin >> n;
        vector<country> countrys(n);
        for (int i = 0; i < n; i++)
        {
            int temp1, temp2, temp3;
            string temp;
            cin >> temp >> temp1 >> temp2 >> temp3;
            country currentCountry;
            currentCountry.name = temp;
            currentCountry.score = temp1 + temp2 + temp3;
            countrys[i] = currentCountry;
        }
        sort(countrys.begin(), countrys.end(), compareByName);
        sort(countrys.begin(), countrys.end(), compareByScore);
       
        for (int i = 0; i < n; i++)
        {
            cout << countrys[i].name << " " << countrys[i].score << endl;
        }

        return 0;
}

bool compareByScore(const country &a, const country &b)
{
    return a.score>b.score;
}

bool compareByName(const country &a, const country &b)
{
    return a.name<b.name;
}
