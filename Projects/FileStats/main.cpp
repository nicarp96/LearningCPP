#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    ifstream file;
    file.open("scores.txt");
    if (!file)
    {
        cout << "there was a probelm...bailing out" << endl;
        return 1;
    }
    int current;
    int min = 0;
    int max = 0;
    int sum = 0;
    int count=0;
    while (!file.eof())
    {
        file >> current;
        if(count==0){
            min = current;
            max= current;
        }
        if(current<=100&&current>0){
            if(current>max){
                max = current;
            }
            else if(current<min){
                min = current;
            }
            sum += current;
            count++;
        }
        else{
            continue;
        }
    }
    cout << "max " << max << endl;
    cout << "min " << min << endl;
    cout << "average " << (double)sum / count << endl;
    file.close();

    return 0;
}