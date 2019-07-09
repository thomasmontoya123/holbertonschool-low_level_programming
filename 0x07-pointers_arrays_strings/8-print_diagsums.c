#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - diagonal sums
 * @a: multi array
 * @size: uni size
 * Return: void
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

		for (i = 0; i < size; i++)
		{
			sum += *(a + ((size * i) + i));
		}

		printf("%d, ", sum);
		sum = 0;
		for (i = 0; i < size; i++)
		{
			sum += *(a + (((size * (i + 1)) -  (i + 1))));
		}
		printf("%d\n", sum);

}
