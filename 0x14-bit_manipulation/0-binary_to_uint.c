#include "holberton.h"

/**
 * _pow_recursion - 2 raised to the power of y
 * @len: power
 * Return: power
 *
 */

int _pow_recursion(int len)
{
	if (len < 0)
	{
		return (-1);
	}

	else if (len == 0)
	{
		return (1);
	}

	else
	{
		return (2 *  _pow_recursion(len - 1));
	}
}

/**
 * binary_to_uint - conervert binary to unsigned int
 * @b: binary string
 * Return: power
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int conversed = 0;


	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			conversed += 0;
			len--;
		}

		else if (b[i] == '1')
		{
			len--;
			conversed += _pow_recursion(len);
		}
		else
		{
			return (0);
		}

	}
	return (conversed);


}
