#include <iostream>
#include "functions.h"

using namespace std;
int main()
{
	int month , padding;
	cout << "Enter month number and first day of the month number: ";
	getInput(month, padding);
	int days;
	string monthName;
	getMonthInfo(month, days, monthName);
	calendarOutput(monthName, padding, days);
}

