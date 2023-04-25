#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: The integer input number
 * Return: 1 is greater than zero, -1 is less than zero and 0 is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
