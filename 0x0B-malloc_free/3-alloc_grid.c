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
	int a;
	int **gr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gr = (int **)malloc(height * sizeof(int *));
	if (gr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gr[i] = (int *)malloc(width * sizeof(int));
		if (gr[i] == NULL)
		{
			free(gr);

			for (a = 0; a < i; a++)
			{
				free(gr[a]);
			}
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
