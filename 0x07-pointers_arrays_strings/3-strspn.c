#include "holberton.h"
/**
 * _strspn - lenght of a prefix substring
 * @s: string
 * @c: character
 *
 * Return: dest
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int acceptsize ;
	int repeats = 0;

	for (acceptsize = 0; accept[acceptsize] != 0; acceptsize++)
	{
		;
	}
	for ( i = 0;  i <= acceptsize ; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				repeats++;
			}

		}

	}

	return (repeats);
}
