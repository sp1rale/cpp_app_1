#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	double  scale, distanceInCm, distanceInKm;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	    cout << "--------------------------------------------------\n";
		cout << "Calculation of the distance between settlements" << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "--------------------------------------------------\n";
		cout << "Enter the output data" << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "--------------------------------------------------\n";

		cout << "the number of kilometers in one centimeter ->";
		cin >> scale;
		cout << "Distance between points representing settlements (cm) ->";
		cin >> distanceInCm;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "--------------------------------------------------\n";
		distanceInKm = distanceInCm / 100.0 * scale;
		cout << "Distance between settlements " << distanceInKm << " km." << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "--------------------------------------------------\n";
		SetConsoleTextAttribute(hConsole, 7);
	return 0;
}