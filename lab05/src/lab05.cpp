//============================================================================
// Program     : lab05.cpp
// Programmer  : April Polubiec
// Date        : October 17, 2018
// Purpose     : Practice concept of functions and working with the string class.
//============================================================================

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double round2(double);
string reverseTokens(string);
double houseTax5(int, double, double);

int main() {
	cout << "The function round2 rounds a number to two places. For example..."
			<< endl
			<< "32.4851 rounds to "
			<< round2(32.4851)
			<< " (rounding up)"
			<< "and 32.4431 rounds to "
			<< round2(32.4431)
			<< " (rounding down)."
			<< endl
			<< "Negative numbers work too: "
			<< "-4.1892 rounds to "
			<< round2(-4.1892)
			<< "."
			<< endl << endl;

	cout << "The function reverseTokens will reverse a list. For example..."
		<< endl
		 << "'string1,string2,string3' is transformed into "
		 << reverseTokens("string1,string2,string3")
		 << endl
		 << "and"
		 << endl
		 << "'apple,orange,banana' is reversed to "
		 << reverseTokens("apple,orange,banana")
		 << "."
		 << endl << endl;

	cout << "The function houseTax5 returns the cost of a house after 5 years"
			<< endl
			<< "given the initial cost, annual fuel coast and tax rate. For example..."
			<< endl
			<< "The total cost after 5 years of a $100k house, with an estimated $1k "
					"annual fuel cost and 10% tax rate is $"
			<< houseTax5(100000,1000,.1)
			<< "."
			<< endl
			<< "The total cost after 5 years of a 175k house, with an estimated $2500"
					" annual fuel cost and 2.5% tax rate is $"
			<< houseTax5(175000,2500,.025)
			<< "."
			<< endl;

	return 0;
}


double round2(double x){
	double ones, tenths, hundredths;

	ones = floor(x);
	tenths = (floor((x-ones)*10))/10;
	hundredths = (round((x-ones-tenths)*100))/100;
	return ones+tenths+hundredths;
}


string reverseTokens(string s){
	string word1, word2, word3;
	int comma1, comma2;

	comma1 = s.find(",");
	word1.assign(s, 0, comma1);
	comma2 = s.find(",", comma1+1);
	word2.assign(s, comma1+1, s.length()-comma2-1);
	word3= s.substr(comma2+1);
	return word3+","+word2+","+word1;

}

double houseTax5(int initHouseCost, double annFuelCost, double taxRate){

	return (annFuelCost*5 + initHouseCost) + (taxRate*initHouseCost)*5;

}
