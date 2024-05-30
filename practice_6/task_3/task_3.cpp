#include <iostream>
#include <string>
#include <regex>
#include "functions.h"
#include <Windows.h>

using namespace  std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    const int daysInMonths[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    const string daysOfWeek[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
    //January|February|March|April|May|June|July|August|September|October|November|December
    string monthName;
    string firstDay;

    cout << "Enter month name: "<<endl;
    getline(cin, monthName);
    cout << "Enter first day of month: "<<endl;
    getline(cin, firstDay);


    const int monthsCounter = sizeof(daysInMonths) / sizeof(daysInMonths[0]);
    int monthDays = -1;
    regex regexMonth(monthName);
    smatch matchMonth;
    for (int i = 0; i < monthsCounter; i++) {
        if (regex_match(months[i],matchMonth, regexMonth) == 0) {
            monthDays = daysInMonths[i];
            break;
        }

    }

    const int daysCounter = sizeof(daysOfWeek) / sizeof(daysOfWeek[0]);
    int firstDayIndex = -1;
    for (int i = 0; i < daysCounter; i++) {
        if (strcmp(daysOfWeek[i].c_str(), firstDay.c_str()) == 0) {
            firstDayIndex = i;
            break;
        }

    }

    calendarOutput(monthName, firstDayIndex + 1, monthDays);
}

