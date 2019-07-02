#include "holberton.h"

/**
 * puts_half - function that prints the half
 * @str: integer value for the function
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 * Return: void
 *
 */
void puts_half(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 0)
	{
		b = a / 2;
	}

	else
	{
		b = (a + 1) / 2;
	}

	while (b < a)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
