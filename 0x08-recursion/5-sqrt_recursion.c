#include "holberton.h"
/**
 * number - find number
 * @n: for sqrt
 * @num: sqrt
 * Return: num
 *
 */

int number(int n, int num)
{
	if (n % 10 == 2 || n % 10 == 3 || n % 10 == 7 || n % 10 == 8)
	{
		return (-1);
	}

	else if (num * num == n)
	{
		return (num);
	}

	return (number(n, num + 1));

}
/**
 * _sqrt_recursion - find natural sqrt
 * @n: for sqrt
 *
 * Return: num
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	return (number(n, 1));


}
