#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Prints all elements of a list.
 * @h: list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodeCounter = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodeCounter++;
	}

	return (nodeCounter);
}

