//============================================================================
// Program     : lab04.cpp
// Programmer  : April Polubiec
// Date        : October 10, 2018
// Purpose     : Practice concept of functions.
//============================================================================

#include<iostream>
using namespace std;

void outputName();
int addFour(int x);
double divn(double x, double n);
double getSecFromWeeks(int weeks);

int main() {
	double number1, number2;
	int weeks;

	cout << "Welcome to Lab04 by ";
	outputName();
	cout << endl
		 << "Give me any number, except 0: ";
	cin >> number1;
	cout << "Give me another number, except 0: ";
	cin >> number2;
	cout << "Thank you."
			<< endl
			<< "Your first number given to addfour is: "
			<< addFour(number1)
			<< endl
			<< "Your second number given to addfour is: "
			<< addFour(number2)
			<< endl
			<< "Your first then second number given to divn is: "
			<< divn(number1, number2)
			<< endl
			<< "Your second then first number given to divn is: "
			<< divn(number2, number1)
			<< endl
			<< "Your first addFour then second addFour number given to divn is: "
			<< divn(addFour(number1), addFour(number2))
			<< endl
			<< "Your second addFour then first addFour number given to divn is: "
			<< divn(addFour(number2), addFour(number1))
			<< endl
			<< "Now give me the number of weeks to compute: ";

	cin >> weeks;

	cout << "Thank you"
		<< endl
		<< weeks
		<< " weeks is "
		<< getSecFromWeeks(weeks)
		<< " seconds.";

	return 0;
}

int addFour(int x){
	return x+4;
}

double divn(double x, double n){
	return x/n;
}

void outputName(){
	cout << "April Polubiec";
}

double getSecFromWeeks(int weeks){
	const int SEC_PER_WEEK = 60*60*24*7;
	return SEC_PER_WEEK*weeks;
}
