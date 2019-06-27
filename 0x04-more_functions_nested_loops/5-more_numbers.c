#include "holberton.h"
/**
 * more_numbers - prints the numbers 0 - 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int num;

	for (a = 0; a < 10; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			_putchar('0' + 1);
			_putchar('0' + num % 10);
		}
	_putchar('\n');
	}
}
