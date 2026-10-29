#include <iostream>
using namespace std;

int main()
{
	int choice;

	cout << "JOHN'S RESTAURANT" << endl << endl;

	cout << "Select A Menu" << endl << endl;

	cout << "1. Pizza       10 USD " << endl;
	cout << "2. Hamburger   5 USD" << endl;
	cout << "3. Sushi       7 USD" << endl;
	cout << "4. Pasta       5 USD" << endl << endl;

	cout << "Enter A Choice: ";

	cin >> choice;

	cout << endl;

	switch (choice)
	{
	case 1:
		cout << "You Selected A Pizza - 10 USD" << endl;
		break;

     case 2:
		 cout << "You Selected A Hamburger - 10 USD" << endl;
		 break;

	 case 3:
		 cout << "You Selected A Sushi - 7 USD" << endl;
		 break;

	 case 4:
		 cout << "You Selected A Pasta - 5 USD" << endl;
		 break;
     
	 default:
		 cout << "Invalid Choice" << endl;
		 break;
	}
	return 0;


	

}

