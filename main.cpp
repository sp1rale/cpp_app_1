#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double R, R0, R1, R2, R3;
	cout << "R1: ";
	cin >> R1;
	cout << "R2: ";
	cin >> R2;
	cout << "R3: ";
	cin >> R3;
	R0 = 1 / R1 + 1 / R2 + 1 / R3;
	R = 1 / R0;
	cout << "R: " << R;
	return 0;
}