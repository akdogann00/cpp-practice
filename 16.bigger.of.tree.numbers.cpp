#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3;
    cout << "Enter 1st Number: ";

    cin >> number1;

    cout << "Enter 2nd Number: ";

    cin >> number2;
    

    cout << "Enter 3rd Number: ";
    
    cin >> number3;

    cout << endl;

    if (number1 > number2 && number1 > number3) {
        
        cout << "1st Number is Biggest";
    }
    else if (number2 > number1 && number2 > number3) {

        cout << "2nd Number is Biggest";
    }
    else if (number3 > number1 && number3 > number2) {

        cout << "3rd Number is Biggest";
    }
    else if (number1 == number2 && number1 == number3) {

        cout << "All Numbers are Equal";
    }
    
    return 0;
}

