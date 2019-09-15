#include"lists.h"

/**
 * get_dnodeint_at_index - return
 * @head: head
 * @index: node position
 * Return: address of nth  node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temporal;

	temporal = head;

	for (i = 0; i != index; i++)
	{
		if (head->next)
			temporal = temporal->next;
		else
			return (NULL);
	}

	return (temporal);
}
