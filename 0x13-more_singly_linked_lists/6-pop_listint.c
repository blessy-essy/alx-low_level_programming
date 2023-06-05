#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the head node
 *
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (num);
}
