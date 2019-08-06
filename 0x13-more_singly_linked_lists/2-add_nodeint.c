#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a list.
 * @head: first node
 * @n: number
 * Return: addres of new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);


	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);

}
