#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - reverse list
 * @head: head
 * Return: pointer to the first node after reverse
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previusNode, *nextNode;

	previusNode = NULL;
	nextNode = NULL;

	if (!head || !(*head))
		return (NULL);

	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = previusNode;
		previusNode = *head;
		*head = nextNode;
	}
	*head = previusNode;
	return (*head);
}
