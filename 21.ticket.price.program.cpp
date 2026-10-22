#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "SUPERSTAR CINEMA TICKET SYSTEM";

    cout << endl;
    cout << endl;

    cout << "Enter Your Age: ";

    cin >> age;

    cout << endl;
    
    if (age <= 3) {

        cout << "Your Ticket is Free";
    }

    else if (age >= 4 && age <= 10) {

        cout << "Your Ticket Price is 7 Dollars";
    }
    else if (age >= 11 && age <= 18) {

        cout << "Your Ticket Price is 12 Dollars";
    }
    else {

        cout << "Your Ticket Price is 15 Dollars";
    }

    return 0;

}

