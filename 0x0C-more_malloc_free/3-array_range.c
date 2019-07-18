#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum  int (included)
 * @max: max int (included)
 *
 * Return: pointer to the newly created array
 *
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

return (array);

}
