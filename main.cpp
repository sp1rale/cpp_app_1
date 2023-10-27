#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	double length, width, height, volume;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout << "---------------------------------------------\n";
	SetConsoleTextAttribute(hConsole, 13);
	cout << "Calculation of the volume of a parallelepiped\n";
	SetConsoleTextAttribute(hConsole, 10);
	cout << "---------------------------------------------\n";
	SetConsoleTextAttribute(hConsole, 13);
	cout << "Enter the output data:\n";
	SetConsoleTextAttribute(hConsole, 10);
	cout << "---------------------------------------------\n";
	SetConsoleTextAttribute(hConsole, 11);
	cout << "length(cm)-> ";
	SetConsoleTextAttribute(hConsole, 11);
	cin >> length;
	SetConsoleTextAttribute(hConsole, 11);
	cout << "width(cm)-> ";
	SetConsoleTextAttribute(hConsole, 11);
	cin >> width;
	cout << "height(cm)-> ";
	SetConsoleTextAttribute(hConsole, 11);
	cin >> height;
	volume = length * width * height;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "---------------------------------------------\n";
	SetConsoleTextAttribute(hConsole, 13);
	cout << "The volume is " << volume << endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "---------------------------------------------\n";
	SetConsoleTextAttribute(hConsole, 7);
	return 0;
}