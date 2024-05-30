#include <iostream>
#include <iomanip>
#include "functions.h"
using namespace std;



int main()
{
	for (int i = 2; i <= 101; i++)
	{
		if (isPrime(i))
		{
			cout << i << std::setw(4);
		}
	}


    return 0;

}