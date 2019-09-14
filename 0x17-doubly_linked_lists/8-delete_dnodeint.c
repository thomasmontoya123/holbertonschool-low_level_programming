#include "lists.h"

/**
 * dlistint_len - Return number of elements
 * @h: head
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}

/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: head
 * @index: index of the list where the new node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporal;
	unsigned int len = 0, i = 0;

	if (!*head)
		return (-1);

	temporal = *head;
	len = dlistint_len(*head);


	if (index > len)
		return (-1);

	if (index == 0)
	{
		*head = temporal->next;
		if (temporal->next)
			temporal->next->prev = NULL;
		free(temporal);
		return (1);
	}

	while (i < index)
	{
		temporal = temporal->next;
		i++;
	}

	temporal->prev->next = temporal->next;

	if (temporal->next)
		temporal->next->prev = temporal->prev;

	free(temporal);
	return (1);
}
