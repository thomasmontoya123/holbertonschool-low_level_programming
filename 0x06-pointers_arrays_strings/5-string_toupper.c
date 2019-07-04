#include "holberton.h"
/**
 * string_toupper - function that reverse string
 * @t: string
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 *     * Return: converted char
 *
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] -= 32;
		}
		a++;
	}




	return (s);
}
