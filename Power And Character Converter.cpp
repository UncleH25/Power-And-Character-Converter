#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//Variables
	double base, exponent;
	char ch;

	//Input
	cout << "Enter a base: ";
	cin >> base;

	cout << "Enter an exponent: ";
	cin >> exponent;

	//Calculation
	double result = pow(base, exponent);

    return 0;
}
