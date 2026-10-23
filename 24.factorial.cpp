#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a Number: ";

    cin >> number;

    cout << endl;

    if (number < 0) {
        cout << "Factorial of a negative number is not defined!";

    }
    else if (number > 20) {
        cout << "Please enter a number between 0 and 20 (Memory Overflow Danger)! ";
    }
    else {
        long long factorial = 1;

        for (int i = 1; i <= number; i++) {
            factorial = factorial * i;
        }

        cout << "Factorial: " << factorial;
    }
    return 0;
}

