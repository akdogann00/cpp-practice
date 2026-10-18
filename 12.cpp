#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    cout << "Enter 1nd Number: ";

    cin >> number1;

    cout << endl;

    cout << "Enter 2nd Number: ";

    cin >> number2;
    
    cout << endl;

    if (number1 < number2)
    {
        cout << number1 << " is less than " << number2 << endl;
    }
    else if (number2 < number1)
    {
        cout << number2 << " is less than " << number1 << endl;
    }
    else if (number1 == number2)
    {
        cout << number1 << " is equal to " << number2 << endl;
    }
    
    return 0;

}

