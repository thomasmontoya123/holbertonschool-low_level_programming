#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - remove node at given position
 * @head: head
 * @index: index of the list
 * Return: 1 for success or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporal, *nodeToDelete;
	unsigned int i;

	if (!(*head))
		return (-1);

	temporal = *head;

	if (index == 0)
	{
		nodeToDelete = temporal;
		*head = temporal->next;
		free(nodeToDelete);
		return (1);
	}

	for (i = 0; temporal->next != NULL && i != (index - 1); i++)
	{
		temporal = temporal->next;
	}

	if (temporal == NULL || temporal->next == NULL)
		return (-1);

	nodeToDelete = temporal->next;
	temporal->next = (temporal->next)->next;
	free(nodeToDelete);
	return (1);
}
