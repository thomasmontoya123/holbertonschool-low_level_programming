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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
	s++;

	}
	return ('\0');
}
