#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointing string
 *
 * Return: the converted number, or 0 if b is NULL
 * Or 0 if there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}

	return (result);
}
