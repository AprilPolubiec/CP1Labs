//============================================================================
// Program     : lab03.cpp
// Programmer  : April Polubiec
// Date        : September 26, 2018
// Purpose     : Calculate the distance between two points inputed by user.
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double x1, x2, y1, y2, distance;

	cout << "X-coordinate of first point: ";
	cin >> x1;
	cout << "Y-coordinate of first point: ";
	cin >> y1;
	cout << "X-coordinate of second point: ";
	cin >> x2;
	cout << "Y-coordinate of second point: ";
	cin >> y2;

	distance = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
	cout << "The distance between ("
			<< x1
			<< ", "
			<< y1
			<< ") and ("
			<< x2
			<< ","
			<< y2
			<< ") is "
			<< distance
			<< ".";

        return 0;
}
