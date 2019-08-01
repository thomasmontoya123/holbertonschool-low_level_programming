#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: first node
 * @str: String
 * Return: addres of new element.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int size;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	for (size = 0; str[size]; size++)
		;

	newNode->str = strdup(str);
	newNode->len = size;
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);

}
