#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: swaps and stores the values of b
 * @b: swaps and stores the values of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
