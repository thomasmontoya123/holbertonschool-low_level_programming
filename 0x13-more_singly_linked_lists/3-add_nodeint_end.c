#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a list_t list.
 * @head: first node
 * @n: number
 * Return: addres of new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *end;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);


	end = *head;
	newNode->n = n;
	newNode->next = NULL;

	if (!(*head))
	{
		*head = newNode;
		return (newNode);
	}

	else
	{
		while (end->next)
			end = end->next;
	}

	end->next = newNode;
	return (newNode);
}
