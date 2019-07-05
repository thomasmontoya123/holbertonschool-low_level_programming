#include "holberton.h"
/**
 * print_number - integer print
 * @num: value for function
 * Return: return 0
 */


void print_number(int num)
{
	unsigned int top = 0;

	if (num % 10 < 0)
	{
		_putchar('-');
		top = -num;
	}
	else
	{
		top = num;
	}

	if (top < 10)
	{
		_putchar('0' + (top % 10));
	}

	else
	{
		print_number(top / 10);
		_putchar('0' + top % 10);
	}
}
