#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - add node at a given position
 * @head: head
 * @idx: index of the list
 * @n: integer value of the node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temporal;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	else
		temporal = *head;


	while (i != idx - 1)
	{
		if (temporal->next != NULL)
		{
			temporal = temporal->next;
			i++;
		}
		else
			return (NULL);
	}
	newNode->next = temporal->next;
	temporal->next = newNode;
	return (newNode);
}
