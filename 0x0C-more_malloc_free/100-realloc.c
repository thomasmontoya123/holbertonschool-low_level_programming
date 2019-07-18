#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @min: minimum  int (included)
 * @max: max int (included)
 *
 * Return: pointer to the new block of memory
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;
	unsigned size;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		newptr = malloc(new_size * sizeof(char));
		return (newptr);
	}

	newptr = malloc(new_size * sizeof(char));

	if (newptr == NULL)
	{
		return (ptr);
	}

	if (old_size > new_size)
	{
		size = new_size;
	}
	else
	{
		size = old_size;
	}

	for (i = 0; i < size; i++)
	{
		newptr[i] = *((int *)ptr + i);
	}
	free (ptr);
	return (newptr);
}

