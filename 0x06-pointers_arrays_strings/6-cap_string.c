#include "holberton.h"
/**
 * *cap_string - first letter upper
 * @s: string
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 *     * Return: converted char
 *
 */
char *cap_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (a == 0)
		{
			if (s[a] >= 'a' && s[a] <= 'z')
			{
				s[a] -= 32;
			}
		}

		if (s[a] == ',' || s[a] == ';' || s[a] == '.' ||
		s[a] == '!' || s[a] == '?' || s[a] == '"' ||
		s[a] == '(' || s[a] == ')' || s[a] == '{' ||
		s[a] == '}' || s[a] == ' ' || s[a] == '\n' || s[a] == '	')
		{
			if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
			{
				s[a + 1] = s[a + 1] - 32;
			}

		}



	a++;
	}
	return (s);
}
