#include <iostream>
using namespace std;

int main()
{
    int number1;

    cout << "Enter a number: ";

    cin >> number1;

    cout << endl;

    if (number1 > 0)
    {
        cout << "This Number is Pozitive" << endl;
    }
    else if (number1 == 0) {
        
        cout << "This Number is Neutral" << endl;
    }
    else if (number1 < 0) {
        cout << "This Number is Negative " << endl;
    }

    return 0;




}