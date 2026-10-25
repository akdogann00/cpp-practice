#include <iostream>
using namespace std;
int main()
{
    int score = 0;

    string answer;
    int answer2;
    int answer3;

    cout << "What is the capital of Turkiye?: ";

    cin >> answer;

    cout << endl;

    if (answer == "Ankara") {
        score++;
        
        cout << "Correct! ";
        cout << "Your Score is 1";
    }
    else {

        cout << "Wrong Answer. ";

        cout << "Your Score is 0";
    }

    cout << endl;
    cout << endl;


    cout << "How many days are there in a week (Enter a Number): ";

    cin >> answer2;

    cout << endl;

    if (answer2 == 7) {
        score++;
        cout << "Correct!" << endl;
    }
    else {
        cout << "Wrong Answer" << endl;
    }

    cout << "Your Score is: " << score << endl;

    cout << endl;

    cout << "How many months are there in a year (Enter A Number): ";

    cin >> answer3;

    cout << endl;

    if (answer3 == 12) {
        score++;
        cout << "Correct!" << endl;

    }
    else {
        cout << "Wrong Answer" << endl;

    }

    cout << "Your Score is: " << score << endl;

    return 0;
}

