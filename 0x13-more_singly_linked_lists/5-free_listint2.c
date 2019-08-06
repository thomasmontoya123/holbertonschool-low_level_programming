#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees list
 * @head: first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temporal;


	if (!head)
		return;

	while (*head)
	{
		temporal = *head;
		*head = (*head)->next;
		free(temporal);
	}

	*head = NULL;

}
