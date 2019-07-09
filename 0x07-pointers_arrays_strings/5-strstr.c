#include "holberton.h"
/**
 * _strstr - locates substring
 * @haystack: string
 * @needle: substring
 *
 * Return: haystack
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0;  haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			return (haystack = (haystack + i));
		}
	}
	return (haystack = (haystack + i));
}
