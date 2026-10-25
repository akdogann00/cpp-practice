#include <iostream>
using namespace std;

int main()
{
    double celsius;
    double fahrenreit;

    cout << "Temperature Converter v1.0";

    cout << endl;
    cout << endl;


    cout << "Enter Temperature in Celsius: ";

    cin >> celsius;

    fahrenreit = celsius * 9.0 / 5.0 + 32;

    cout << endl;

    cout << "Temperature in Fahrenheit: " << fahrenreit << endl;

    return 0;
} 

