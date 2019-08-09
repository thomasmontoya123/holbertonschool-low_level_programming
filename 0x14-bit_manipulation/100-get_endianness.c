#include "holberton.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big 1 for little
 */


int get_endianness(void)
{
	int i = 1;

	if (*(char *) &i == 1)
		return (0);

	else
		return (0);

}
