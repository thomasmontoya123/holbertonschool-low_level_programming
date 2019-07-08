#include "holberton.h"
/**
 * _memset - fills memory with constant
 * @s: pointer to string
 * @b: char for replace
 * @n: value for function
 *    (* section header: Section description)*
 *     * Return: new string
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		n--;
		s++;
	}

	return (s);

}
