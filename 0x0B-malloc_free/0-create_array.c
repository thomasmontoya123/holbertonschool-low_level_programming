#include <stdlib.h>
#include "holberton.h"

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char  *charac;

	if (size == 0)
	{
		return (NULL);
	}
	charac = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		charac[i] = c;
	}
	return (charac);

}
