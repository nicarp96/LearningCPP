#include <iostream>


void TOH(int n, int A, int B, int C) {
  if (n > 0) {
    TOH(n-1, A, C, B);
    std::cout << A << " " << C << std::endl;
    TOH(n-1, B, A, C);
        }
  
}



int main(int argc, char **argv){
    TOH(3,1,2,3);
}
