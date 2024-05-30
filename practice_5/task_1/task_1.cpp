#define output(value,pow,res) ( cout<< "Number "<<value<<" to the power of "<< pow<<" is: "<<res<<endl)
	


#include <iostream>
#include <math.h>

using namespace std;

double calcPow(double value, int p =2 ) {return p == 0 ? 1 : p > 0 ? value * calcPow(value, p - 1) : 1 / calcPow(value, -p);}

inline void input(double& value, int & p ) { cin >> value >> p; }


int main()
{
	double value;
	int p;
	cout << "Enter the number and pow value: ";
	input(value , p);
	output(value, 2, calcPow(value));
	output(value, p, calcPow(value,p));

}