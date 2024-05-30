#include "Declaration.h"

#include <iostream>
#include <string>

void Print(double value, double& a, char& ch1, double& b, char& oper, double& c, char& ch2, double& d) {
	std::cout << a << ch1 << b << oper << c << ch2 << d << " = "<<value << std::endl;
}void Print(int value1, int value2, double& a, char& ch1, double& b, char& oper, double& c, char& ch2, double& d) {
	std::cout << a << ch1 << b << oper << c << ch2 << d << " = " << value1 << "/" << value2 << std::endl;
}