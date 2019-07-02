#include "holberton.h"

/**
 * puts2 - function that prints
 * and updates the value
 * @str: integer value for the function
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 * Return: void
 *
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a = a + 2;
	}
	_putchar('\n');
}

