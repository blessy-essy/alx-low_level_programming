#include "lists.h"

/*
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: The number of nodes in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		numNodes++;
		h = h->next;
	}

	return (numNodes);
}
