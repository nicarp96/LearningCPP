#include <iostream>
#include "Swapper.hpp"
using namespace std;

template <class T>
T getBigger(T a, T b);

template <class T>
T getSmaller(T a, T b);
int main()
{
    int biggerInt = getSmaller(543, 1233);
    string biggerStr = getSmaller("Mexico", "Moldova");
    cout << biggerInt << endl
         << biggerStr;
    cout << endl
         << endl
         << endl;
    Swapper<string> mySwapper("Micheal", "Jordan");
    Swapper<int> mySwapper2(5434, -12763);
    cout << "Before Swap:\n"
         << mySwapper.getFirst() << " " << mySwapper.getSecond() << endl;
    cout<< mySwapper2.getFirst() << " " << mySwapper2.getSecond() << endl;
    mySwapper2.swap();
    mySwapper.swap();

    cout << "After Swap:\n"
         << mySwapper.getFirst() << " " << mySwapper.getSecond() << endl;
    cout<< mySwapper2.getFirst() << " " << mySwapper2.getSecond() << endl;
    return 0;
}

template <class T>
T getBigger(T a, T b){
    if(a>b)
        return a;
    return b;
}
template <class T>
T getSmaller(T a, T b){
    if(a<b)
        return a;
    return b;
}
