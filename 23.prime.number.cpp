#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a Number: ";

    cin >> number;

    cout << endl;

    if (number <= 1) {

        cout << "This Number is Not Prime";
    }
    else {
        bool isPrime = true;
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                cout << "This Number is Not Prime";
                isPrime = false;
                break;

                
             }

             
        }

        
        if (isPrime == true) {
            cout << "This Number is Prime";

        }


    }
         





    return 0;
}

