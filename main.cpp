#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int year;
	cout << "Enter year: ";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0)) {
		cout << "This year has 366 days" << endl;
	}
	else
	{
				cout << "This year has 365 days" << endl;
	}
	

	return 0;
}