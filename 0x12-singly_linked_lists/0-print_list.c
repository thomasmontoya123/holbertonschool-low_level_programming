#include "lists.h"
#include <stdio.h>
#include <stddef.h>

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
	unsigned int i;

	while (h)
	{
		if(!h->str)
		{
			printf("[0] (nil)\n");
		}
		printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;

	}
	return (i);
}
