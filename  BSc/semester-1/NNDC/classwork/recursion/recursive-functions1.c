#include <stdio.h>
/**
 * author: dipak giri, 24.1.2021
 * title: a simple program on recursion
 **/

/**
 * summary of factorial: if the argument number is grater than 0 it will return 1, as 0! is 1. whenever number is grater than 0 it will return number * factorial(number - 1)
 **/

int factorial(int number)
{
	if (number > 0)
	{
		return number * factorial(number - 1);
	}
	else if (number == 0)
	{
		return 1;
	}
}

int main()
{
	// take a number of type integer.
	int aNumber = /* suppose */ 3;

	int factOfNumber = 1; // variable to store the factorial of that number.

	/**
	 * expected result is 3! = 3*2*1*0! = 6
	 **/

	factOfNumber = factorial(aNumber);

	printf("\nFactorial of %d id %d\n", aNumber, factOfNumber);
}