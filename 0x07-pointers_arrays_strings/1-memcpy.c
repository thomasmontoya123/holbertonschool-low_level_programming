#include "holberton.h"
/**
 * _memset - fills memory with constant
 * @dest: destination copy
 * @src: source 
 * @n: value for function
 *    (* section header: Section description)*
 *     * Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
