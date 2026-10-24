#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
    srand(time(0));

    
    int secretNumber;
    int guess;
    int attemps = 0;

    secretNumber = rand() % 100 + 1;

   do  {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;

        attemps++;

            if (guess < secretNumber) {
                cout << "Too low! Try Again." << endl;
            }

            else if (guess > secretNumber) {

                cout << "Too high! Try Again." << endl;
            }

      } while (guess != secretNumber);

    cout << "Correct! You found the number." << endl;
    cout << "Attempts: " << attemps << endl;
}

