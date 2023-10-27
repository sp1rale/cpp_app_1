#include <iostream>
using namespace std;

int main()
{
	int grivnas, kopiykas;
	cout << "Enter grivnas: ";
	cin >> grivnas;
	cout << "Enter kopiykas: ";
	cin >> kopiykas;
	if (kopiykas >= 100){
	int additionalGrivnas = kopiykas / 100;
	grivnas += additionalGrivnas;
	kopiykas %= 100;
	}
	cout << "Grivnas: " << grivnas << endl;
	cout << "Kopiykas: " << kopiykas << endl;

	return 0;
}	
	