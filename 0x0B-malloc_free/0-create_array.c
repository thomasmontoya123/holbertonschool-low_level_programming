#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - returns a pointer to a newly allocated space in memory
 *
 * @size: size for malloc
 * @c: character
 *
 * Return: int
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char  *charac;

	if (size == 0)
	{
		return (NULL);
	}
	charac = malloc(size * sizeof(char));
	if(charac == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		charac[i] = c;
	}
	return (charac);

}
