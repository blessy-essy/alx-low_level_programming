#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index of a linked list
 * @head: pointer to the first element of thelinked list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);

		prev = current;
		current = current->next;
	}

	if (prev != NULL)
		prev->next = current->next;
	else
		*head = current->next;

	free(current);
	return (1);
}
