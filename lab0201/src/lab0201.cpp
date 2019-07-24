//============================================================================
// Program     : lab0201.cpp
// Programmer  : April Polubiec
// Date		   : September 25, 2018
// Purpose 	   : Program which says hello to user using first and last name.
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstname;
	string lastname;
	cout << "Enter first name:" << endl;
	cin >> firstname;
	cout << "Enter last name:" << endl;
	cin >> lastname;
	cout << "Hello, " << firstname << " " << lastname << ". Have a good day!";

	return 0;
}
