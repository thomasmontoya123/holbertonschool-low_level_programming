#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n)
 * @head: head
 * Return: result
 */

int sum_dlistint(dlistint_t *head)
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
