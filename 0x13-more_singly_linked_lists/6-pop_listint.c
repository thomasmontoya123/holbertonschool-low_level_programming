#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head node
 * @head: node to delete
 * Return: deleted  node value
 */

int pop_listint(listint_t **head)
{
	int deletedNodeValue = 0;
	listint_t *temporal;

	if (!head)
		return (0);

	deletedNodeValue = (*head)->n;
	temporal = *head;
	*head = (*head)->next;
	free(temporal);

	return (deletedNodeValue);
}
