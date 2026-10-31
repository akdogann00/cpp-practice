#include <iostream>
using namespace std;

int main()
{
	int number;
	int i;

	cout << "BASIC MULTIPLICATION SYSTEM" << endl << endl;

	cout << "Enter A Number: ";
	cin >> number;

	cout << endl;
	
	for (i = 1; i <= 10; i++)
	{
		cout << number << " x " << i << " = " << number * i << endl;
	}
		
}

