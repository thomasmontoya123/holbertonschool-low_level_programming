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
	int number;
	va_list valist;

	if (n ==  0)
	{
		return;
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(valist, int);
		printf("%i", number);
		if ((i < (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}

