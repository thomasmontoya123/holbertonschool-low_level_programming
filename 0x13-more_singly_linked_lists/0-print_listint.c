#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - Prints all elements of a list.
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCounter = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodeCounter++;
	}

	return (nodeCounter);
}
