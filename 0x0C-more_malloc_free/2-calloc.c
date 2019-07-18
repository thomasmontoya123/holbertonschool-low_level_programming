#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of members
 * @size: size of each member
 *
 * Return: pointer to the allocated memory.
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, totalsize;
	char *pointer;

	totalsize = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(totalsize);

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < totalsize; i++)
	{
		pointer[i] = 0;
	}

	return (pointer);

}
