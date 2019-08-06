#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: head
 * @index: poisition for insertion
 * Return: nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temporal;

	temporal = head;

	for (i = 0; i != index; i++)
	{
		if (head->next)
			temporal = temporal->next;

		else
			return (NULL);

	}

	return (temporal);
}
