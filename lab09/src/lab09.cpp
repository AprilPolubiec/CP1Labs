//============================================================================
// Program     : lab09.cpp
// Programmer  : April Polubiec
// Date        : November 21, 2018
// Purpose     : Test concepts of arrays, conditionals and functions.
//============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void fillArrays(int[], int[], unsigned int);
void arrayProducts(int[], int[], int[], unsigned int);
int arraySum(int[], unsigned int);

int main() {
	const unsigned int SIZE = 20;
	int x[SIZE], y[SIZE], z[SIZE];

	fillArrays(x, y, SIZE);
	arrayProducts(x, y, z, SIZE);
	cout << "Square root of the sum of products is " << arraySum(z, SIZE);

	return 0;
}

void arrayProducts(int x[], int y[], int z[], unsigned int n){

	cout << setw(3) << "x" << setw(3) << "y" << setw(3) << "z" << endl;

	for (size_t i=0; i<n; ++i){
		z[i]=x[i]*y[i];
		cout << setw(3) << x[i] << setw(3) << y[i] << setw(3) << z[i] << endl;
	}
}

int arraySum(int z[], unsigned int n){
	int sum=0;

	for(size_t i=0; i<n; ++i)
		sum += z[i];

	return sqrt(sum);
}

void fillArrays(int x[], int y[], unsigned int n){

	for(size_t i=0; i<n; ++i){
		cout << "Array x, number " << i+1 << ": ";
		cin >> x[i];
	}
	for(size_t i=0; i<n; ++i){
		cout << "Array y, number " << i+1 << ": ";
			cin >> y[i];
	}
}
