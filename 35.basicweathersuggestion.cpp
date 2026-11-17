#include <iostream>
using namespace std;

int main()
{
    int temperature;

    cout << "BASIC WEATHER SUGGESTION" << endl << endl;

    cout << "Enter a temperature in celsius: ";

    cin >> temperature;

    cout << endl;

    if (temperature <= 0)
    {
        cout << "The Weather is Freezing";
    }
    else if (temperature >= 1 && temperature <= 10)
    {
        cout << "The Weater is Very Cold";
    }
    else if (temperature >=11 && temperature <=20)
    {
     cout << "The Weather is a Very Mild";
    }
    else if (temperature >=21 && temperature <=30)
    {
        cout << "The Weather is Warm";
    }
    else if (temperature >= 31)
    {
        cout << "The Weather is Very Hot";
    }

    return 0;
}

