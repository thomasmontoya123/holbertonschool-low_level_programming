#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print number
 * @separator: string of nums
 * @n: num of strings
 *
 * Return: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	char *string;

	if (n ==  0)
	{
		return;
	}

	va_start(valist, n);
	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			string = va_arg(valist, char *);

			if (string == NULL)
			{
				printf("(nil)");
			}


			printf("%s", string);

			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
	printf("\n");
	}

}
