#include "TaskFunctions.h"
#include <iostream>
#include <math.h>
#include <string>

double CalcSummSimple(double summStart, double percent, int years) {
    return  (summStart * (1 + (percent / 100) * years));
}
double CalcSummDiff(double summStart, double percent, int years) {
    return  (summStart * pow(1 + (percent / 100.), years));
}

double TotalEarnings(double summEnd, double summStart) { return abs(summEnd - summStart); }

double TotalInvestments(double summEnd, double summStart, int years) {

    return (abs(summEnd - summStart) / summStart) * (1. / years) * 100;
}