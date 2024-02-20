#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main(){
    vector<int> myNumbers;
    try{
    myNumbers.resize(myNumbers.max_size()+1);
   }
    catch(const length_error& err){
        cout<<"hahaha"<<err.what();
    }
    return 0;
}