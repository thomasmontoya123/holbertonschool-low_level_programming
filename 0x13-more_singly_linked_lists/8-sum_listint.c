#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - add int values of the list
 * @head: head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int result = 0;

	if (!head)
		return (0);

	while (head)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
