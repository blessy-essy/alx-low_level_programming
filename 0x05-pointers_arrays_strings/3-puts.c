#include "main.h"

/**
 * _puts - prints a string, followed by new line to stdout
 * @str: pointer to the string
 * Return: a string and new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i]i)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
