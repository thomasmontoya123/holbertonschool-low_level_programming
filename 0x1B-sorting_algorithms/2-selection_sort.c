#include "sort.h"

/**
 * swaper - swaps position values
 * @array: array
 * @i: value to swap
 * @j: value to swap
 * Return: void
 */

void swaper(int array[], int i, int j)
{
	int holder = 0;

	holder = array[i];
	array[i] = array[j];
	array[j] = holder;
}

/**
 * selection_sort - Selection sort algorithm
 * @array: Array of Ints
 * @size: Array's size
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, h, pos = 0, change;
	int value_2 = 0, breaker;

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		h = 0;
		change = 0;
		value_2 = array[i];
		for (j = i; j < size; j++)
		{
			if (value_2 > array[j])
			{
				value_2 = array[j];
				pos = j;
				change = 1;
			}
		};
		for (; array[h]; h++)
		{
			if ((h == (size - 1)) && array[h] > array[h - 1])
			{
				breaker = 1;
				break;
			}
			if (array[h] < array[h + 1])
				continue;
			else
				break;
		}
		if (breaker == 1)
			break;
		if (change == 1)
		{
			swaper(array, i, pos);
			print_array(array, size);
		}
	}
}
