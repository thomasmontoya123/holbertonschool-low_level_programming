#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees list
 * @head: first node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temporal;

	if (!head)
		return;

	while (head)
	{
		temporal = head;
		head = head->next;
		free(temporal);
	}

}
