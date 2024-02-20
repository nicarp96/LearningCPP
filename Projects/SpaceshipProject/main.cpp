#include <iostream>
#include "WarpDriveOverheating.h"
using namespace std;

void WrapTest(int temp);

int main()
{

    try
    {
        WrapTest(55);
        WrapTest(56);
        WrapTest(22);
        WrapTest(89);
        WrapTest(189);
        WrapTest(78);

    }
    catch (const WarpDriveOverheating &err)
    {
        cout << err.what();
    }
    return 0;
}

void WrapTest(int temp)
{
    if (temp < 80)
    {
        cout << "Temperature is within tolerance" << endl;
    }
    else
    {
        throw WarpDriveOverheating();
    }
}
