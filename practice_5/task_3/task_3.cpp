#include <iostream>
#include <ctime> 
#include <iomanip>
#include <windows.h> 
using namespace std;



void input(int& min, int& max) {
    cout << "Enter the minimum value: ";
    cin >> min;
    cout << "Enter the maximum value: ";
    cin >> max;

}

inline void output( long lambdaExpr)
{
    cout  << lambdaExpr<< setw(10) << setfill(' ');
}


int main()
{
    int min, max;
    input(min, max);

    

    while (true)
    {
        Sleep(1000);
        auto generateRandomNum = [](int min,int  max) {return (rand() % max) + min; };
        output(generateRandomNum(min, max));

    }
}
