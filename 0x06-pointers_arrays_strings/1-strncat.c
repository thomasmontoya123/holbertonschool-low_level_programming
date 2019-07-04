#include "holberton.h"
/**
 * _strncat - concatenate two strings to n
 * @src: array source
 * @dest: array destination
 * @n: determinate second string
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 * Return: string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != 0 && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}





