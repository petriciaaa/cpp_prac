
#include <iostream>
#include "functions.h"



using namespace std;

double numerator, denominator;

struct Fraction
{
	int denominator;
	int numerator;
};



int main()
{
	int num1,num2,num3,num4;
	char oper1,oper2,summChar;

	cout << "Enter operation, type is a/b + c/d " << endl;
	cin >> num1 >> oper1 >> num2 >> summChar >> num3 >> oper2 >> num4;

	Fraction Fraction;

	Fraction.denominator = num2 * num4;
	Fraction.numerator = num1 * num4 + num3 * num2;

	double res = Fraction.numerator*1.0 / Fraction.denominator;

	cout << round(res*100)/100 << endl;

	numerator = Fraction.numerator;
	denominator = Fraction.denominator;

	reduceFraction(Fraction.numerator, Fraction.denominator);
	cout << numerator << "/" << denominator << endl ;
	
}
