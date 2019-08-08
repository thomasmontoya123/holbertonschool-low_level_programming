#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: position to set the value
 * Return: 1 for succes -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | 1  << index;

	return (1);
}
