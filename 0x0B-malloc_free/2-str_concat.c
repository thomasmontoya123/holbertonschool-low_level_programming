#include <stdlib.h>
#include "holberton.h"


/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to the duplicated string
 *
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, i, concatsize, j;
	char *concat;

	for (i = 0; s1[i] != '\0'; i++)
	{
		size1++;
	}
	for (i = 0; s2[i]; i++)
	{
		size2++;
	}
	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	concatsize = size1 + size2;
	concat = malloc(concatsize * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	return (concat);

}
