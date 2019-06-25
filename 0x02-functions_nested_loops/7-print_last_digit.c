#include "holberton.h"
/**
 *  * print_last_digit - find letter
 *   * @a: integer value for the function
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 *     * Return: last digit
 *
 */
int print_last_digit(int a)
{
int last = (a % 10);

if (last < 0)
{
last = last * -1;

}

_putchar(last + '0');
return (last);
}
