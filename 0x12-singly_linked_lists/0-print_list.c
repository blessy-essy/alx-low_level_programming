#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("%s\n", ptr->str);
		else
			printf("[0] (nil)\n");

		s++;
		ptr = ptr->next;
	}

	return (s);
}
