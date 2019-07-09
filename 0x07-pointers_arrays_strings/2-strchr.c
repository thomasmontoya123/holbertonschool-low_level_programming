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
	for (; *s != 0; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (s);
}
