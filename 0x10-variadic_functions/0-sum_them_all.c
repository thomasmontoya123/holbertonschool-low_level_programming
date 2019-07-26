#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all the parameters
 * @n: nums
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int result;
	unsigned int i;

	result = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(valist, int);
	}
	va_end(valist);
	return (result);
}
