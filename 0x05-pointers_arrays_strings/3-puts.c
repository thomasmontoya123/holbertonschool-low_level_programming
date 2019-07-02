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
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	
	_putchar('\n');
}

