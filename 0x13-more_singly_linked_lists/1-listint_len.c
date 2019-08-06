#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - Return number of elements
 * @h: list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodeCounter = 0;

	while (h)
	{
		h = h->next;
		nodeCounter++;
	}

	return (nodeCounter);
}
