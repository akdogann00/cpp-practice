#include <iostream>
using namespace std;

int main()
{
    int password;

    cout << "Enter Your Password: ";

    cin >> password;

    cout << endl;

    if (password == 1234) {
        cout << "Password is True";
    }
    else {
        cout << "Password is False";
    }
    
    return 0;


}
