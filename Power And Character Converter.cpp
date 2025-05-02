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

	//Convert character to ASCII
	int asciiValue = static_cast<int>(ch);
	//previous and next characters
	char prevChar = static_cast<char>(asciiValue - 1);
	char nextChar = static_cast<char>(asciiValue + 1);

	//Output for Character
	cout << "\n--- Character Result ---" << endl;
	cout << left << setw(20) << "Character: " << right << setw(5) << ch << endl;
	cout << left << setw(20) << "ASCII Value: " << right << setw(5) << asciiValue << endl;
	cout << left << setw(20) << "Previous Character: " << right << setw(5) << prevChar << endl;
	cout << left << setw(20) << "Next Character: " << right << setw(5) << nextChar << endl;

    return 0;
}
