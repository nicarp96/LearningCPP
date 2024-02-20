#include "Alien.h"
#include <iostream>
using namespace std;


int main(){
    Alien alien1(55, 155, 'M');
    Alien alien2(85, 180, 'F');
    Alien alien3(90, 175, 'M');
    Alien alien4(50, 150, 'F');
    cout << "alien1>=alien2\t" <<boolalpha<< (alien1 >= alien2)<<endl;
    cout << "alien3>alien2\t" << (alien3 > alien2)<<endl;
    cout << "alien4!=alien2\t" << (alien4 != alien2)<<endl;
    cout << "alien3==alien4\t" << (alien3 == alien4)<<endl;
    cout << "alien4<alien1\t" << (alien1 < alien2)<<endl;




    return 0;
}
