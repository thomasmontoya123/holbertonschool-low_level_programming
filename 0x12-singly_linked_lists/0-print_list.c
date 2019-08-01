#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_list - print all elements of a list
 *
 * @h: list
 *
 * Return: number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t nodeCount;

	nodeCount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		nodeCount++;

	}
	return (nodeCount);
}
