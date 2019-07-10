#include "holberton.h"
/**
 * _strlen_recursion - print string in reverse
 * @s: string
 * Return: strlength
 *
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);

}
