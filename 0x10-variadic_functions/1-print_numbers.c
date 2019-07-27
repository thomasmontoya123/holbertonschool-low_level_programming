#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print number
 * @separator: string of nums
 * @n: num of nums
 *
 * Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	if (n ==  0)
	{
		return;
	}

	va_start(valist, n);
	if (separator)
	{
		for (i = 0; i < n; i++)
		{

			if (i == (n - 1))
			{
				printf("%i\n", va_arg(valist, int));
				break;
			}
			else
			{
				printf("%i%s", va_arg(valist, int), separator);
			}
		}
	}
	va_end(valist);
	printf("\n");
}

