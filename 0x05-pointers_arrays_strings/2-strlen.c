#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 * and updates the value
 * @s: integer value for the function
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 * Return:the size
 *
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);

}
