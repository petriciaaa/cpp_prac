
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

double AreaOfTreangle(double a, double b, double c) {
    double P = (a + b + c) / 2;
    return  (sqrt(P * (P - a) * (P - b) * (P - c)));
}

double CalcSideOfTreangle(double xstart, double xend, double ystart, double yend) {
    return sqrt(pow(xstart - xend, 2) + pow(ystart - yend, 2));
}

double CalcSimplePercent(float SStart,float SEnd,int Years) {
    return (100* SEnd/(SStart*Years) - 100/Years);
}
double CalcDifficultPercent(float SStart, float SEnd, int Years) {
    return 100*(pow((SEnd / SStart),1.0/Years) -1)   ;
}