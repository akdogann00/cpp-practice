#include <iostream>
using namespace std;

int main()
{
    int number1;

    cout << "Enter Your Exam Result: ";

    cin >> number1;

    cout << endl;

    if (number1 >= 85 && number1 <= 100) {

        cout << "Your Grade is A";
    }
    else if (number1 >= 70 && number1 <= 84) {

        cout << "Your Grade is B";
    }
    else if (number1 >= 60 && number1 <= 69) {

        cout << "Your Grade is C";
    }
    else if (number1 >= 50 && number1 <= 59) {

        cout << "Your Grade is D";
    }
    else if (number1 >= 40 && number1 <= 49) {

        cout << "Your Grade is E";

    }
    else {

        cout << "Your Grade is F";
    }
    
    return 0;
}