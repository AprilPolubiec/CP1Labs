//============================================================================
// Program     : lab06.cpp
// Programmer  : April Polubiec
// Date        : October 24, 2018
// Purpose     : Find the number of a day of a month in a given year while taking into account leap years.
//============================================================================

#include <iostream>
using namespace std;

int dayNumber(int month, int day, int year);
bool isLeapYear(int);

int main() {
	int month, day, year;

	cout << "Enter month as integer (for example, 1 for January, 2 for February, etc): ";
	cin >> month;
	cout << "Enter day of the month: ";
	cin >> day;
	cout << "Enter year: ";
	cin >> year;

	cout << month << "/" << day << "/" << year << " is day number " << dayNumber(month,day,year) << ".";
	return 0;
}


int dayNumber(int month, int day, int year){
	int totalDaysPrevious, feb=28;
	const int jan=31, march=31, april=30, may=31, june=30, july=31, aug=31, sept=30, oct=31, nov=30;

	if (isLeapYear(year))
			feb=29;

	switch(month){
	case 1:
		totalDaysPrevious=0;
		break;
	case 2:
		totalDaysPrevious=jan;
		break;
	case 3:
		totalDaysPrevious=jan+feb;
		break;
	case 4:
		totalDaysPrevious=jan+feb+march;
		break;
	case 5:
		totalDaysPrevious=jan+feb+march+april;
		break;
	case 6:
		totalDaysPrevious=jan+feb+march+april+may;
		break;
	case 7:
		totalDaysPrevious=jan+feb+march+april+may+june;
		break;
	case 8:
		totalDaysPrevious=jan+feb+march+april+may+june+july;
		break;
	case 9:
		totalDaysPrevious=jan+feb+march+april+may+june+july+aug;
		break;
	case 10:
		totalDaysPrevious=jan+feb+march+april+may+june+july+aug+sept;
		break;
	case 11:
		totalDaysPrevious=jan+feb+march+april+may+june+july+aug+sept+oct;
		break;
	case 12:
		totalDaysPrevious=jan+feb+march+april+may+june+july+aug+sept+oct+nov;
		break;
	}

	return totalDaysPrevious+day;

}

bool isLeapYear(int year){
	bool isLeapYear;
	if ((year%100 != 0) && (year%4 == 0))
		isLeapYear = true;
	else if ((year%100 == 0) && (year%400 == 0))
		isLeapYear = true;
	else
		isLeapYear = false;

	return isLeapYear;

}
