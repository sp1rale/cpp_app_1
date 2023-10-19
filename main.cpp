#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double S,a,v,t;
	cout << "v: ";
	cin >> v;
	cout << "t: ";
	cin >> t;
	cout << "a: ";
	cin >> a;
	S = v * t + (a * t) / 2;
	cout << "S: " << S << endl;
	return 0;
}