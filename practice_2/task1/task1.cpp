
#include <iostream>
#include <string>

#include "Declaration.h"
#include "Variables.h"
#include "template_function.h"

using namespace std;

   
double a, b, c, d;
char ch1, ch2, oper;

int main()
{   
    double res1;
    double firstFraction;
    double secondFraction;

    cout << "Enter operation, type is a/b + c/d" << endl;
 
    //Function using Refs
    GetInput(a, ch1, b, oper, c, ch2, d);

    firstFraction = a / b;
    secondFraction = c / d;

    res1 = AddTwoNums(firstFraction,secondFraction);
   
    //Dunno destructurization dont work like    int[val1,val2]  =  Func(...params)
    pair<int, int> reduced_nums = ReduceNum(a, b, c, d);
    int frac1 = reduced_nums.first;
    int frac2 = reduced_nums.second;
    //Function using Refs
    Print(res1, a, ch1, b, oper, c, ch2, d);
    if (frac1== frac2)
    {
        Print(1, a, ch1, b, oper, c, ch2, d);
    }
    else
    {
        Print(frac1, frac2, a, ch1, b, oper, c, ch2, d);
    }
    
  
    return 0;
}

    