#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - Return number of elements
 * @h: list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodeCounter = 0;

	while (h)
	{
		h = h->next;
		nodeCounter++;
	}

	return (nodeCounter);
}
