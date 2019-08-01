#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees list
 * @head: first node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temporal;

	while (head)
	{
		temporal = head;
		head = head->next;
		free(temporal->str);
		free(temporal);
	}
}
