#include "holberton.h"

/**
 * swap_int  - function that swaps two integers
 * @a: integer value for the function
 * @b: integer value for thwe swap
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 *     * Return:void
 *
 */

void swap_int(int *a, int *b)
{
int swap;

swap = *a;

*a = *b;
*b = swap;
}
