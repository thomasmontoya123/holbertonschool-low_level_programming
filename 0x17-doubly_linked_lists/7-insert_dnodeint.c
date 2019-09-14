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
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head
 * @idx: index of the list where the new node should be added
 * @n: new node data
 * Return: result
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temporal;
	unsigned int i = 0, len = 0;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	len = dlistint_len(*h);

	if (idx == len)
	{
		add_dnodeint_end(h, n);
		return (new_node);
	}

	else if (idx == 0)
	{
		add_dnodeint(h, n);
		return (new_node);
	}
	else
		temporal = *h;

	while (i != idx - 1)
	{
		temporal = temporal->next;
		i++;

	}
	new_node->next = temporal->next;
	temporal->next->prev = new_node;
	temporal->next = new_node;
	new_node->prev = temporal;
	return (new_node);
}
