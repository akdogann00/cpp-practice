#include <iostream>
using namespace std;

int main()
{
    int water;

    cout << "DAILY WATER TRACKER" << endl << endl;

    cout << "How many glasses of water did you drink today" << endl;
    cout << "1 glass of water = 200 ml" << endl << endl;
    cout << "How much did you drink: ";
    cin >> water;

    cout << endl;

    cout << "You drank " << water * 200 << " ml" << endl;

    if (water < 8)
    {
        cout << "You Need to Drink More Water!" << endl;
    }
    else if (water == 8)
    {
        cout << "You Drank Enought Water." << endl;
    }
    else
    {
        cout << "You Drank a Lot of Water." << endl;
    }
    
    return 0;
          
}

