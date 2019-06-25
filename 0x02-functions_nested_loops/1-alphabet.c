#include "holberton.h"

/**
 * print_alphabet -  alphabet  lowercase
 *
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}
