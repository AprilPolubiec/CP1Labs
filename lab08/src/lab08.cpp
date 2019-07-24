//============================================================================
// Program     : lab08.cpp
// Programmer  : April Polubiec
// Date        : November 14, 2018
// Purpose     : Test concepts of functions, conditionals and arrays.
//============================================================================

#include <iostream>
using namespace std;

void forsize(int x, int y, int& small, int& big);
void compress(string&s);
int max(int[], int);

int main(){
	int minimum, maximum;
	string testString = "Hi my name is April";
	int testArray[] = {1, 5, 2, 0, 3};

	cout << "Testing forsize(5,7,minimum,maximum):" << endl;
	forsize(5,7, minimum, maximum);
	cout << minimum << maximum << endl;
	cout << "Testing compress('Hi my name is April'): " << endl;

	compress(testString);
	cout << testString << endl;

	cout << "Testing max(testArray, 5): " << endl
		<< max(testArray, 5);


	return 0;
}

void forsize(int x, int y, int&small, int&big){
	if (x<y){
		small=x;
		big=y;
	}
	else{
		big=x;
		small=y;
	}
}

void compress(string&s){
	int space = s.find(" ");

	do{
	s.erase(space, 1);
	space = s.find(" ");
	}while(space<s.length());

}

int max(int x[], int size){
	int maxValue = 0;

	for(int i=0; i<size; ++i)
		if (x[i]>maxValue)
			maxValue = x[i];

	return maxValue;
}
