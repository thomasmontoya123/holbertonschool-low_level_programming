#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: columns
 * @height: rows
 *
 * Return: gr
 *
 */

int **alloc_grid(int width, int height)
{
	int i, j = 0;
	int **gr;

	gr = (int **)malloc(width * sizeof(int *));

	if (gr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		gr[i] = (int *)malloc(height * sizeof(int));
		if (gr[i] == NULL)
		{
			for(i = j; j <= 0; j-- )
			{
				free(gr[j]);
			}
			free(gr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gr[i][j] = 0;
		}

	}

	return (gr);

}
