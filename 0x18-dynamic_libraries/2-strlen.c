#include "main.h"

/**
 *_strlen - returns the lenght of a string
 * @s: length to be checked
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
