#include <iostream>
using namespace std;

int main()
{
    int number1;

    cout << "Enter your age: ";

    cin >> number1;
    
    cout << endl;

    if (number1 == 18) {

        cout << "You can vote";

    }
    else if (number1 > 18) {

        cout << "You can vote";
    }
    else if (number1 < 18) {

        cout << "You not can vote";
    }

    return 0;
}

