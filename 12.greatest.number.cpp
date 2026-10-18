#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    cout << "Enter 1st Number: ";

    cin >> number1;

    cout << endl;

    cout << "Enter 2nd Number: ";

    cin >> number2;

    cout << endl;

    if (number1 > number2)
    {
        cout << number1 << " is Greater Than " << number2;
    }
    else if (number2 > number1)
    { 
        cout << number2 << " is Greater Than " << number1;
    }
    else if (number1 == number2)
    {
        cout << "Both Numbers Are Equal";
    }

    return 0;
}

