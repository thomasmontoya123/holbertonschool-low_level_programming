#include "holberton.h"
/**
 * _memcpy - fills memory with constant
 * @dest: destination copy
 * @src: source
 * @n: value for function
 *    (* section header: Section description)*
 *     * Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char buf;
	unsigned int i = 0;

	while (i < n)
	{
		buf = src[i];
		dest[i] = buf;
		i++;
	}
	return (dest);
}
