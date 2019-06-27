#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: value for the function
 *
 * Return: void.
 *
 */
void print_diagonal(int n)
{
	int line, space;

	for (line = 0 ; line < n ; line++)
		{
		for (space = 0 ; space < line ; space++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
		}

	if (n <= 0)
		_putchar('\n');
}
