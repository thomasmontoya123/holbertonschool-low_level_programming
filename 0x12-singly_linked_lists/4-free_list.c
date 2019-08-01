#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - frees list
 * @head: first node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temporal;

	temporal = head;

	while (temporal)
	{
		temporal = head;
		head = head->next;
		free(temporal);
	}
}
