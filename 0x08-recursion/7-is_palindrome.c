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

/**
 * comparison - compare for palindromes
 * @s: string
 * @rev: rev string
 *
 * Return: 1 for palindrome
 *
 */

int comparison(char  *s, char *rev)
{
	if (*s != *rev)
	{
		return (0);
	}

	else if (s >= rev)
	{
		return (1);
	}

	return (comparison(s + 1, rev - 1));
}

/**
 * is_palindrome - search palindrome
 * @s: string
 *
 * Return: 1 for palindrome
 *
 */

int is_palindrome(char *s)
{
	return (comparison(s, s + _strlen_recursion(s) - 1));
}

