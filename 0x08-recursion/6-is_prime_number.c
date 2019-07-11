#include "holberton.h"
/**
 * primecondition - search for prime
 * @n: number from main
 * @number: aux for prime check
 * Return: n
 *
 */

int primecondition(int n, int number)
{
	if (n == number)
	{
		return (1);
	}

	else if (number % n == 0)
	{
		return (0);
	}

	return (primecondition(n + 1, number));
}

/**
 * is_prime_number - search for prime
 * @n: number from main
 * Return: n
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (primecondition(2, n));
	}
}
