

#include "holberton.h"
/**
 * _strncpy - concatenate two strings to n
 * @src: array source
 * @dest: array destination
 * @n: determinate second string
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 * Return: string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;


	while (src[b] != 0 && b < n)
	{
		dest[b] = src[b];
		b++;
	}
	while (n > b)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
