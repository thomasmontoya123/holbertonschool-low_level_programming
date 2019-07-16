#include <stdlib.h>
#include "holberton.h"


/**
 *  _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: original string
 *
 * Return: a pointer to the duplicated string
 *
 */

char *_strdup(char *str)
{
	unsigned int len, i;
	char *buf;

	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	buf = malloc(len + 1);

	if (buf == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		buf[i] = str[i];
	}
	buf[i] = '\0';
	return (buf);
}
