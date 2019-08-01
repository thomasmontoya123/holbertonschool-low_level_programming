#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_ed - Adds a new node at the end of a list_t list.
 * @head: first node
 * @str: String
 * Return: addres of new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *end;
	unsigned int size;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	for (size = 0; str[size]; size++)
		;

	end = *head;
	newNode->str = strdup(str);
	newNode->len = size;
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
