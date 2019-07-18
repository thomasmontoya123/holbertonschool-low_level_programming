#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - from n pos
 *
 * @s1: string 1
 * @s2: string 2
 * @n: pos
 *
 * Return: concatenation
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i, j;
	char *nconcat;

	size1 = 0;
	size2 = 0;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		size1++;
	}
	for (i = 0; s2[i]; i++)
	{
		size2++;
	}

	if (n >= size2)
	{
		size2 = n;
	}

	nconcat = malloc((size1 + size2 + 1) * sizeof(char));

	if (nconcat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		nconcat[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		nconcat[size1] = s2[j];
		size1++;

	}

	nconcat[size1] = '\0';

	return (nconcat);

}
