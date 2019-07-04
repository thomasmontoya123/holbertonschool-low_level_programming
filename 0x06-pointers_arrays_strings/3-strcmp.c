#include "holberton.h"
/**
 * _strcmp - compare two strngs
 * @s1: string 1
 * @s2: string 2
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 * Return: integer comparison
 *
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int differ = 0;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)

	{
		differ = s1[a] - s2[a];

		if (differ != 0)
		{
			break;
		}

	}

	return(differ);
}
