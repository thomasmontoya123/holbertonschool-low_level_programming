#include "holberton.h"
/**
 *  * print_sign - print the sign of a number
 *   * @n: integer value for the function
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 *     * Return: 1 for positve -1 for negative and 0 for 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}

}

