#include "holberton.h"
/**
 * print_line - print n lines (____)
 * @n: integer value for the function
 *
 * Return: void
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
