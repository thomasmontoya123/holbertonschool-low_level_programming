#include "holberton.h"
/**
 * reverse_array - function that reverse string
 * @a: string
 * @n: number of elemnts
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 *     * Return:void
 *
 */
void reverse_array(int *a, int n)
{
	int i, b;
	int temp[500];
	int c = n;

	i = 0;
	b = 0;

	while (i < n)
	{
		temp[i] = a[i];
		i++;
	}

	c--;

	while (c >= 0)
	{
		a[c] = temp[b];
		c--;
		b++;
	}
}
