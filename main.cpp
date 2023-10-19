#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double L, R, S;
cout << "L: ";
cin >> L;
R = L / (2 * 3.14);
S = 3.14* pow(R,2);
cout << "S: " << S;
return 0;
}