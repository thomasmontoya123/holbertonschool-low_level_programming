#include "holberton.h"

/**
 * get_bit - 2 raised to the power of y
 * @n: number
 * @index: position to get the value
 * Return: power
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int valueAtIndex;

	valueAtIndex = n >> index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	valueAtIndex = valueAtIndex & 1;

	return (valueAtIndex);


}
