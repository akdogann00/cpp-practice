#include <iostream>
using namespace std;

int main()
{
    int balance = 1000;
    int choice;
    int amount;

    cout << "ATM PROGRAM v2.0" << endl << endl;

    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl << endl;
    cout << "Choose A Option: ";
    cin >> choice;

    cout << endl;

    if (choice == 1)
    {

        cout << "Your Balance is: " << balance << endl;
    }
    else if (choice == 2)
    {

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        cout << endl;
        
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "New Balance: " << balance << endl << endl;
        }
        else
        {
            cout << "Invalid Amount!" << endl << endl;
        }
    }
    else if (choice == 3)
    {
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        cout << endl;


        if (amount > 0 && amount <= balance)
        {

            balance = balance - amount;
            cout << "New Balance: " << balance << endl << endl;
        }
        else
        {

            cout << "Insufficient balance!" << endl << endl;
        }
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
    return 0;





    
}

