#include "holberton.h"
/**
 * _strspn - lenght of a prefix substring
 * @s: string
 * @accept: string for comp
 *
 * Return: dest
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int repeats = 0;
	int breaker;

	for (i = 0; s[i] != '\0' && s < accept; i++)
	{
		breaker = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				repeats++;
				breaker = 1;
			}
		}
		if (breaker == 0)
		{
			break;
		}
	}
	return (repeats);
}
