#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	const double pi = 3.14159;
	double radius, volume;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);
	cout<<"Enter the radius of the sphere->";
	cin>>radius;
	system("cls");
	volume = (4.0 / 3.0) * pi * pow(radius, 3);
	SetConsoleTextAttribute(hConsole, 10);
	cout << "----------------------------------------\n";
	cout<<"The volume of the sphere is "<<volume<<endl;
	cout <<"----------------------------------------\n";
	SetConsoleTextAttribute(hConsole, 7);
	return 0;
}