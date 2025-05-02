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

	//Output for Calculation
	cout << "\n--- Power Result ---" << endl;
	cout << left << setw(15) << "Base: " << setw(10) << right << base << endl;
	cout << left << setw(15) << "Exponent: " << setw(10) << right << exponent << endl;
	cout << left << setw(15) << "Result: " << setw(10) << right << result << endl;

	//Input for Character
	cout << "\nEnter a character: ";
	cin >> ch;

    return 0;
}
