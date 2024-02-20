#include <iostream>
#include <stdexcept>
using namespace std;

char getLetterGrade(int grade);

int main(){

    int grade;
    cout<<"Type your grade -> ";
    cin>>grade;
    try{
        cout<<getLetterGrade(grade);
    }
    catch(const out_of_range& err){
        cout<<err.what();
    }
    return 0;
}

char getLetterGrade(int grade)
{
    if(grade>=0&&grade<=59){
        return 'F';
    }
    else if(grade>=60&&grade<=69){
        return 'D';
    }

    else if(grade>=70&&grade<=79){
        return 'C';
    }

    else if(grade>=80&&grade<=89){
        return 'B';
    }

    else if(grade>=90&&grade<=100){
        return 'A';
    }
    else{
        throw out_of_range("Your percent should be between 0 and 100 inclusive.");
    }
    return 0;
}
