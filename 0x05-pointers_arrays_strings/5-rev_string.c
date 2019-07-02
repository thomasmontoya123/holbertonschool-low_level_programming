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
	char temp[500];

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		temp[a] = s[a];
		a++;
	}
	a = a - 1;
	while (a >= 0)
	{
		s[a] = temp[b];
		a--;
		b++;
	}
}
