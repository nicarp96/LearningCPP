#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string crit;
    cin >> crit;
    int min = 0;
    int max = 0;
    int z1 = 0, z2 = 0;
    for (int i = 0; i < n; i++)
    {
        int temp_z, temp_t;
        cin >> temp_z>> temp_t;
        if(min==0&&max==0){
            min = temp_t;
            max = temp_t;
            z1 = temp_z;
            z2 = temp_z;
        }
        if(temp_t>max){
            z2 = temp_z;
            max = temp_t;
        }
        else if(temp_t<min){
            z1 = temp_z;
            min = temp_t;
        }
        else if(temp_t==min&&temp_z>z1){
            z1 = temp_z;
        }

        else if(temp_t==max&&temp_z>z2){
            z2 = temp_z;
        }
    }
    if(crit=="min"){
        cout << z1 << "=" << min;
    }

    else if(crit=="max"){
        cout << z2 << "=" << max;
    }

    else if(crit=="minmax"){
        cout << z1 << "=" << min<<" "<<z2<<"="<<max;
    }
    else{
        cout << "ERROR";
    }
    return 0;
}