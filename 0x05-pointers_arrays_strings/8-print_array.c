#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements
 * @a: array
 * @n: integer value for the function
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 * Return: void
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}

		else
		{
			printf("%d", a[i]);
		}

	}

	putchar('\n');
}
