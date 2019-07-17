#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac:argcount
 * @av: argstring
 *
 * Return: void
 *
 */

char *argstostr(int ac, char **av)
{
	int i, j, len;
	int a = 0;
	char *concat;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0';  j++)
		{
			len++;
		}
		len++;
	}
	len++;
	concat = malloc(len * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[a] = av[i][j];
			a++;
		}
		concat[a] = '\n';
		a++;
	}
	return (concat);
}

