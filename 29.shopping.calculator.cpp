#include <iostream>
using namespace std;

int main()
{
    double price;
    int quantity;
    double total;

    cout << "BASIC SHOPPING CALCULATOR v1.0" << endl << endl;

    cout << "Enter product price: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    total = price * quantity;

    cout << endl;

    cout << "Total price: " << total << endl;
}

