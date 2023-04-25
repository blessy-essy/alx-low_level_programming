#include "main.h"

/**
 * _isalpha - Checks for alphabetic
 *@c: The character in ASCII code
 *Return: 1 for a letter and 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) | | (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
