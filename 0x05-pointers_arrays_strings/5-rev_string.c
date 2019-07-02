#include "holberton.h"

/**
 * rev_string  - function that reverse string
 * @s: string
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 *     * Return:void
 *
 */
void rev_string(char *s)
{
	int a, b;

	b = 0;
	a = 0;

	char temp;

	while (s[a] != 0)
	{
		a++;
	}

	for (a = a - 1; b < a; a--)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
		b++;
	}
}
