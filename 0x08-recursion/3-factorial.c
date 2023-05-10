#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number given
 * Return: -1 if n is lower than 0 and 1 if n is 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
