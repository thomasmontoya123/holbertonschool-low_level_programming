#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm
 * @array: array
 * @size: size of the arry
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int holder = 0;
	unsigned int i, j;

	if (!array || size < 2)
		return;

	for (i = 0; (i < size - 1); i++)
	{
		j = 0;
		for (j = 0; (j < size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				holder = array[j];
				array[j] = array[j + 1];
				array[j + 1] = holder;
				print_array(array, size);
			}
		}
	}
}
