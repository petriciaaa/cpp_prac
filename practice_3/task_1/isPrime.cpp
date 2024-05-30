#include "functions.h"

bool isPrime(int num) {

	int counter = 0;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0) {
			counter++;
		}
	}
	return (counter > 2) ? 0 : 1;
}
