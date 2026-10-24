#include <iostream>
using namespace std;

int main()
{
    double number1, number2;
    double addition, substraction, multiplication, division;
    int process;

    cout << "Select Your Process";

    cout << endl;
    cout << endl;

    cout << "1.Addition 2.Substraction 3.Multiplication 4.Division";

    cout << endl;
    cout << endl;

    cout << "Select: ";

    cin >> process;

    cout << endl;

    cout << "Enter the First Number: ";

    cin >> number1;

    cout << endl;

    cout << "Enter the Second Number:";

    cin >> number2;

    cout << endl;

    switch (process) {
    case 1:
        addition = number1 + number2;
        cout << "Result: " << addition << endl;
        break;
    case 2:
        addition = number1 - number2;
        cout << "Result: " << addition << endl;
        break;
    case 3:
        addition = number1 * number2;
        cout << "Result: " << addition << endl;
        break;
    case 4:
        if (number2 != 0) {
            division = number1 / number2;
            cout << "Result: " << division << endl;
        }
        else
        {
            cout << "Error: Cannot divide by zero." << endl;
        }
        break;

    default:
        cout << "Invalid process selection." << endl;
        break;
            
    }

}
