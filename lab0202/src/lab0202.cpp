//============================================================================
// Program     : lab0202.cpp
// Programmer  : April Polubiec
// Date        : September 25, 2018
// Purpose     : Solve arithmetic expressions using an integer and double floating point number.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double d;
	int i;
	cout << "Enter in an integer: ";
	cin >> i;
	cout << "Enter in a floating point number: ";
	cin >> d;

	cout << "The sum of " << i << " and " << d << " is " << i+d << "." << endl;
	cout << "The difference of " << i << " and " << d << " is " << i-d << "." << endl;
	cout << "The product of " << i << " and " << d << " is " << i*d << "." << endl;
	cout << "The division of " << i << " and " << d << " is " << i/d << "." << endl;
	cout << d << "/" << 2 << " is " << d/2 << "." << endl;
	cout << i << "/" << 2 << " is " << i/2 << "." << endl;


	return 0;
}
