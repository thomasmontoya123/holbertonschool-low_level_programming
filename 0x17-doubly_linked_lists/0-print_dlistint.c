#include "lists.h"

/**
 * print_dlistint - Prints all elements of a list.
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_counter++;
	}
	return (node_counter);
}
