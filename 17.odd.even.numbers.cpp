#include <iostream>
using namespace std;

int main()
{
	int number1;

	cout << "Enter A Number: ";

	cin >> number1;

	cout << endl;
	
	if (number1 % 2 == 0) {
		cout << "This Number is Even";
	}
	else if (number1 % 2 == 1) {
		cout << "This Number is Odd";
	}
	return 0;
}

