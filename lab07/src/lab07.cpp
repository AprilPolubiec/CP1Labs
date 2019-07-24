//============================================================================
// Program     : lab07.cpp
// Programmer  : April Polubiec
// Date        : October 31, 2018
// Purpose     : Test two functions which use conditionals.
//============================================================================

#include <iostream>
using namespace std;

int getProduct();
void getStats(int n);

int main() {
	int n;

	cout << "Testing getProduct"
			<< endl
			<< getProduct()
			<< endl << endl;
	cout << "Enter n: ";
	cin >> n;
	cout << "Testing getStats"
			<< endl;
	getStats(n);

	return 0;
}

int getProduct(){
	int negativeCount = 0;
	int integer, product=1;

	do{
		cout << "Enter positive #: ";
	cin >> integer;
	if (integer>0){
		product = integer*product;
		negativeCount = 0;}
	else if (integer<0)
		++negativeCount;
	}while(negativeCount<3);

	cout << "Product of positive integers is ";

	return product;
}


void getStats(int n){
	double response, smallest, largest, sum;

	cout << "#1: ";
	cin >> smallest;
	largest = smallest;
	sum = smallest;

	for(int i=2; i<=n; ++i){
		cout << "#" << i << ": ";
		cin >> response;

		if (response<smallest)
			smallest = response;
		if (response>largest)
			largest = response;

		sum += response;
	}

	cout << "Smallest: " << smallest << endl;
	cout << "Largest: " << largest << endl;
	cout << "Average: " << sum/n;
}
