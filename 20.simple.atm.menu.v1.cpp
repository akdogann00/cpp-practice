#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "WELCOME TO SUPERBANK" << endl;

    cout << endl;
    cout << endl;

    cout << "1.Check Balance: " << endl;

    cout << "2.Exit: " << endl;

    cout << endl;

    cout << "Enter Your Choice: ";

    cin >> choice;

    cout << endl;

    if (choice == 1) {

        cout << "Your Balance is 2000 Dollar";
    }
    else if (choice == 2) {

        cout << "Goodbye";
    }
    else  {

        cout << "INVALID NUMBER";
    }

    return 0;
}

