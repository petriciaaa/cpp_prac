// task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <string>
#include  "TemplateFunctions.h"
#include  "TaskFunctions.h"

#define Tabx6 "\t\t\t\t\t\t" 
#define Tabx3 "\t\t\t" 
#define Tabx5 "\t\t\t\t\t" 

using namespace std;

class Invest {
public:
    double summStart;
    double summEnd;
    double percent;
    int years;
};


class PercentType : public Invest {
public:
    double TotalEarnings;
    double TotalInvestments ;
    double SummDifferent;
    
    
};


int main()
{
    double summStart;
    double percent;
    int years;
    cout << "Enter the start summ of invest: "  ;
    cin >> summStart  ; 
    cout << "Enter the percent of invest: " ;
    cin >> percent;
    cout << "Enter the invest time: " ;
    cin >> years;

    PercentType SimplePer;
    PercentType DiffPer;

    SimplePer.percent = percent;
    SimplePer.summStart = RoundToTwoDigits(summStart);
    SimplePer.years = years;
    SimplePer.summEnd = RoundToTwoDigits(CalcSummSimple(summStart, percent, years));
    SimplePer.TotalEarnings = RoundToTwoDigits(TotalEarnings(SimplePer.summEnd, SimplePer.summStart));
    SimplePer.TotalInvestments = RoundToTwoDigits(TotalInvestments(SimplePer.summEnd, SimplePer.summStart, years));

    DiffPer.percent = percent;
    DiffPer.summStart = RoundToTwoDigits(summStart);
    DiffPer.years = years;
    DiffPer.summEnd = RoundToTwoDigits(CalcSummDiff(summStart, percent, years));
    DiffPer.TotalEarnings = RoundToTwoDigits(TotalEarnings(DiffPer.summEnd, DiffPer.summStart));
    DiffPer.TotalInvestments = RoundToTwoDigits(TotalInvestments(DiffPer.summEnd, DiffPer.summStart, years));

    cout << Tabx6 <<"Simple percent : \t Difficult percent : "<<endl;
    cout << "Start summ: "<< Tabx6 << SimplePer.summStart << Tabx3 << DiffPer.summStart <<endl;
    cout << "End summ: "<< Tabx6 << SimplePer.summEnd << Tabx3 << DiffPer.summEnd << endl;
    cout << "Total Earnings: " << Tabx5 << SimplePer.TotalEarnings << Tabx3 << DiffPer.TotalEarnings << endl;
    cout << "Total Investments: " << Tabx5 << SimplePer.TotalInvestments << Tabx3 << DiffPer.TotalInvestments <<endl;
    

}
