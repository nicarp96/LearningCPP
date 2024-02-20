#include <iostream>
#include <stdexcept>
using namespace std;

void doSomething(int num);
void processPositive(int num);

int main()
{
    int input;
    cout << "Enter a positve integer -> ";
    cin >> input;
    try
    {
        doSomething(input);
        cout << "Everything works great in main!\n";
    }
    catch (const invalid_argument &err)
    {
        cout << "There is an error in main! " << err.what() << endl;
    }
    catch (const out_of_range &err)
    {
        cout << "main says the number is too big" << endl;
        cout << err.what();
    }
    return 0;
}

void doSomething(int num)
{
    try
    {
        processPositive(num);
        cout << "you entered a positve integer to doSomething!\n";
    }
    catch (const invalid_argument &err)
    {
        throw;
    }
    catch (const out_of_range &err)
    {
        cout << "doSomething says the numbers is too big\n";
        throw;
    }
}
void processPositive(int num)
{
    cout << "Welcome to positve integer processor!" << endl;
    if (num > 100)
    {
        cout << "processPositve says the number is too big! " << endl;
        throw out_of_range("Number cannot be greater than 100");
    }
    if (num >= 0)
    {
        cout << "Good Job! You entered a positve integer to processPositive" << endl;
    }
    else
    {
        throw invalid_argument("Negative Number passed in");
    }
}