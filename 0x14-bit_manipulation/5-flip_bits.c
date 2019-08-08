#include "holberton.h"

/**
 * flip_bits - bits you would need to flip to get from one number to another
 * @n: number
 * @m: to flip
 * Return: number of bits
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipCounter = 0;
	unsigned long int flip;
	unsigned int max = 0;

	flip = n ^ m;

	while (max < 64)
	{
		if ((flip & 1) != 0)
			flipCounter++;


		flip = flip >> 1;

		max++;
	}

	return (flipCounter);
}

