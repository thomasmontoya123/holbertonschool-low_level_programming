#include "holberton.h"
/**
 * _strchr - locates characyer
 * @s: string
 * @c: character
 *
 * Return: dest
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
	return ('\0');
	}
}
