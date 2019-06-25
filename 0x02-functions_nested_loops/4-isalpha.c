#include "holberton.h"
/**
 *  * _isalpha - find letter
 *   * @c: integer value for the function
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 *     * Return: 1 for letters
 *
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
