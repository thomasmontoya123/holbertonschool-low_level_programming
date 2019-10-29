#include "sort.h"

/**
 * doubly_link_list_swaper - swap two nodes
 * @list: List
 * @temporal: node
 * Return: Void
 */

void doubly_link_list_swaper(listint_t  **list, listint_t **temporal)
{
	listint_t *right, *left;

	left = *temporal;
	right = (*temporal)->next;

	if (left->prev)
		left->prev->next = right;
	else
		*list = right;

	if (right->next)
		right->next->prev = left;

	left->next = right->next;
	right->prev = left->prev;
	right->next = left;
	left->prev = right;
}

/**
 * cocktail_sort_list - cocktail sort algorithm
 * @list: List to sort
 * Return: Void
 */

void cocktail_sort_list(listint_t **list)
{
	listint_t *temporal = NULL;
	unsigned int flag = 1;

	if (!list || !(*list)->next)
		return;
	temporal = *list;
	while (flag)
	{
		flag = 0;
		while (temporal->next)
		{
			if (temporal->n > temporal->next->n)
			{
				doubly_link_list_swaper(list, &temporal);
				print_list(*list);
				flag = 1;
			}
			else
				temporal = temporal->next;
		}
		if (flag == 0)
			break;
		flag = 0;
		temporal = temporal->prev;
		while (temporal->prev)
		{
			if (temporal->n < temporal->prev->n)
			{
				temporal = temporal->prev;
				doubly_link_list_swaper(list, &temporal);
				print_list(*list);
				flag = 1;
			}
			else
				temporal = temporal->prev;
		}

	}
}
