
#include <iostream>
#include <string>
#include <math.h>
#include "FunctionsDeclaration.h"
using namespace std;

void SecondTask() {
   float SStart, SEnd;
    int Years;
    cin >> SStart>>SEnd>>Years;
    cout << "Percent simple: " << round(CalcSimplePercent(SStart, SEnd, Years) * 100) / 100 << endl;
    cout<<"Percent1111 difficult: "<< round( CalcDifficultPercent(SStart, SEnd, Years)*100)/100;
}

void FirstTask() {
    double xa, xb, xc; 
    double ya, yb, yc;
    double SideA, SideB, SideC;
    cout << "Enter the xa,xb,xc cordinates: " << endl;  
    cin >> xa >> xb >> xc;    
    cout << "Enter the ya,yb,yc cordinates: " << endl;  
    cin >> ya >> yb >> yc;
    SideA = CalcSideOfTreangle(xb, xc, yb, yc);
    SideB = CalcSideOfTreangle(xa, xc, ya, yc);
    SideC = CalcSideOfTreangle(xb, xa, yb, ya);
    cout <<"Area is:  " << AreaOfTreangle(SideA, SideB, SideC);
}

void ThirdPrint(double Area) {
    cout << "Area is: " << Area << endl;
}

void ThirdTask() {
    double x1, x2, x3, x4, x5;
    double y1, y2, y3, y4, y5;
    double Side1, Side2, Side3, Side4, Side5;
    double AreaFirstTreangle, AreaSecondTreangle, AreaThirdTreangle;
    double FirstBaseOfTreangle, SecondBaseOfTreangle, ThirdBaseOfTreangle;
    x1 = -2, x2 = 1 ,x3 =3, x4 = 0, x5 = -3;
    y1 = 3, y2 = 3 ,y3 = -1, y4 = -3,y5 = -1;

    Side1 = CalcSideOfTreangle(x1, x2, y1, y2);
    Side2 = CalcSideOfTreangle(x2, x3, y2, y3);
    Side3 = CalcSideOfTreangle(x3, x4, y3, y4);
    Side4 = CalcSideOfTreangle(x4, x5, y4, y5);
    Side5 = CalcSideOfTreangle(x5, x1, y5, y1);



    FirstBaseOfTreangle= CalcSideOfTreangle(x2, x4, y2, y4);
    SecondBaseOfTreangle= CalcSideOfTreangle(x1, x4, y1, y4);
    ThirdBaseOfTreangle = Side1;
    
    AreaFirstTreangle = AreaOfTreangle(ThirdBaseOfTreangle, FirstBaseOfTreangle, SecondBaseOfTreangle);
    AreaSecondTreangle= AreaOfTreangle(FirstBaseOfTreangle, Side2, Side3);
    AreaThirdTreangle= AreaOfTreangle(SecondBaseOfTreangle, Side4, Side5);


    double CurrArea =abs( round(( AreaThirdTreangle + AreaSecondTreangle + AreaFirstTreangle)*100)/100);

    ThirdPrint(CurrArea);
}


int main()
{

   //FirstTask();
   //SecondTask();
   ThirdTask();

}
