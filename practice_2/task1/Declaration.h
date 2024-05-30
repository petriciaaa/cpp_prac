#pragma once
#include <utility>
#include <iostream>

void GetInput(double& a, char& ch1, double& b, char& oper, double& c, char& ch2, double& d);
void Print(double value, double& a, char& ch1, double& b, char& oper, double& c, char& ch2, double& d);
void Print(int value1, int value2, double& a, char& ch1, double& b, char& oper, double& c, char& ch2, double& d);
//std::pair<int, int> ReduceNum(int a, int b, int c, int d);
double AddTwoNums(double a, double b);
int AddTwoNums(int a, int b);

