#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: type listint_t linked list to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numNodes++;
		h = h->next;
	}

	return (numNodes);
}
