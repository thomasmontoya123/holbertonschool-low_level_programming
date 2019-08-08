#include "holberton.h"

/**
 * print_binary - print binary in decimal
 * @n: binary number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int bit;
	int  i, j;

	i = 0;


	if (n == 0)
		_putchar ('0');

	while (n >> i)
		i++;

	for (j = i - 1; j >= 0; j--)
	{
		bit = n >> j;

		if (bit  & 1)
			_putchar('1');

		else
			_putchar('0');

	}

}
