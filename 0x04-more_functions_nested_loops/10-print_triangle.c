#include "holberton.h"

/**
 * print_triangle - draws a triangle
 * @size: size of the triangle
 *
 * Return: void.
 *
 */
void print_triangle(int size)
{
	int a, space, hash;


	for (a = 0 ; a < size ; a++)
		{
		for (space = 2 ; space <= (size - a); space++)
		{
			_putchar(' ');
		}

		for (hash = 0 ; hash <= a ; hash++)
		{
			_putchar('#');
		}

			_putchar('\n');
		}

		if (size <= 0)
		{
			_putchar('\n');
		}
}
