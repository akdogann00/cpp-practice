#include <iostream>
using namespace std;

int main()
{

    int choice;

    cout << "JAMES RESTAURANT";

    cout << endl;
    cout << endl;

    cout << "Select A Menu";

    cout << endl;

    cout << "1.Spaghetti";

    cout << endl;

    cout << "2.Pizza";

    cout << endl;

    cout << "3.Fish & Chips";

    cout << endl;
    cout << endl;

    cout << "Select A Menu: ";

    cin >> choice;

    cout << endl;

    if (choice == 1) {

        cout << "The price you need to pay is 7 dollars";
    }
    else if (choice == 2) {

        cout << "The price you need to pay is 10 dollars";
    }
    else if (choice == 3) {
    
        cout << "The price you need to pay is 12 dollars";
    }
    else {
        cout << "Invalid Answer";
    }

    return 0;

}

