//============================================================================
// Program     : lab10.cpp
// Programmer  : April Polubiec
// Date        : November 28, 2018
// Purpose     : Test concepts of functions, arrays and sorting.
//============================================================================


#include <iostream>
using namespace std;

void buildArray(int x[], unsigned int SIZE);
void bubbleSort(int x[], unsigned int SIZE);
int getMax(int x[], unsigned int SIZE);

int main() {
	const unsigned int SIZE = 8;
	int array[SIZE];

	buildArray(array, SIZE);

	cout << "Array: " << endl;
	for(size_t i=0; i<SIZE; ++i){
			cout << array[i] << ",";
	}
	cout << endl;

	bubbleSort(array, SIZE);

	cout << "Sorted array: " << endl;
	for(size_t i=0; i<SIZE; ++i){
			cout << array[i] << ",";
	}
	cout << endl;

	cout << "Max of array: "
			<< getMax(array, SIZE);

	return 0;
}

void buildArray(int x[], unsigned int SIZE){

	for(size_t i=0; i<SIZE; ++i){
		cout << "Enter an integer: ";
		cin >> x[i];
	}

}

void bubbleSort(int x[], unsigned int SIZE){
	int temp;

	do{
		for(size_t i=0; i<SIZE; ++i){
			if (x[i] > x[i+1]){
			temp = x[i];
			x[i] = x[i+1];
			x[i+1] = temp;
		}
	}

	SIZE -= 1;
	}while(SIZE>0);


}

int getMax(int x[], unsigned int SIZE){
	return x[SIZE-1];
}
