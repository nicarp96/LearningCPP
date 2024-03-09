#include <iostream>
using namespace std;

double e(int x, int n) {
  static double s;
  if (n == 0)
    return s;
  s = 1 + (double)x / n * s;
  return e(x,n-1);
    
}


int main(int, char**){
    std::cout << e(4,20);
}
