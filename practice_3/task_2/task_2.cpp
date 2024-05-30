#include <iostream>
#include "functions.h"
using namespace std;

int mounth, days,padding;




int main()
{
    string mounthName;

    cout << "Enter mounth number: ";
    std::cin >> mounth;   
    cout << "Enter first day of the mounth number: ";
    std::cin >> padding;
    mounthName = getMounth();

    calendarOutput(mounthName);

}