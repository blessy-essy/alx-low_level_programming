#include "main.h"


/**
 * is_prime_number - checks if an integer is a prime number
 * @n: integer
 *
 * Return: 1 if the integer is a prime number and 0 for otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (actual_prime_number(n, n - 1));
	}
}

/**
 * actual_prime_number - recursively calculates if a number is prime
 * @n: number
 * @i: iterator
 *
 * Return: 1 if number is prime and 0 for otherwise
 */

int actual_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (actual_prime_number(n, i - 1));
	}
}
