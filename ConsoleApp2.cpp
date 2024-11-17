#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double sine, cosine, tangent, userInput;
	string letter;

	cout << "provide the angle in radians, then press enter." << endl;

	cin >> userInput;

	if (cin.fail()) {
		cout << "Invalid value. Please provide a valid number." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return 1; //stops program
	}
	sine = sin(userInput);
	cosine = cos(userInput);
	tangent = tan(userInput);
	cout << endl << "The Sine of the angle is " << setprecision(4) << sine << endl;
	cout << "The Cosine of the angle is " << setprecision(4) << cosine << endl;
	cout << "The Tangent of the angle is " << setprecision(4) << tangent << endl << endl;
	return 0;
}