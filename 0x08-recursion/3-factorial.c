#include "holberton.h"
/**
 * factorial - print string in reverse
 * @n: number for factorial
 * Return: strlength
 *
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));


}
