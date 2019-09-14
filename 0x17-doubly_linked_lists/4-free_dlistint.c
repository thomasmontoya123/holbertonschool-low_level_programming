#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporal;

	if (!head)
		return;

	while (head)
	{
		temporal = head;
		head = head->next;
		free(temporal);
	}
}
