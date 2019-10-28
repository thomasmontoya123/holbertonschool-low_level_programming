#include "sort.h"

/**
 * insertion_sort_list - Insertion sort algorithm
 * @list: List to sort
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temporal = NULL;

	if (!list)
		return;
	if ((*list)->next == NULL)
		return;

	temporal = *list;
	temporal = temporal->next;

	for (; temporal; temporal = temporal->next)
	{
		while ((temporal->prev) && temporal->prev->n > temporal->n)
		{
			temporal->prev->next = temporal->next;
			if (temporal->next)
				temporal->next->prev = temporal->prev;
			temporal->next = temporal->prev;
			temporal->prev = temporal->prev->prev;
			temporal->next->prev = temporal;

			if (temporal->prev == NULL)
				*list = temporal;
			else
				temporal->prev->next = temporal;

			print_list(*list);
		}
	}
}
