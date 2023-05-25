#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: number of elements in the array
 * @cmp: pointer to function to be used to compare values
 * Return: -1 if no element matches of size <= 0 otherwise return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
