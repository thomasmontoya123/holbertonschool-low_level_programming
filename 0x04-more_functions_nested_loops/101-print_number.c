#include "holberton.h"
/**
  * print_number - print numbers out
  * @n: integer value for the function 
  */
void print_number(int n)
{
	int a, b, d;
	int num = n;

	d = 10;

	if (n < 0)
	{
		num = num * -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (a = 1; num > 0; a++)
		{
			num /= 10;
		}
			for (b = 0; b < a - 1; b++)
			{
				d *= 10;


			while (d >= 1)
			{
				_putchar(n / d + '0');
				n = n % d;
				d = d / 10;

			}
		}
	}
}
