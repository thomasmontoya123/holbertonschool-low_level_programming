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
	unsigned int i;

	if (!array || size < 2)
		return;

	for (i = 0; array[i] ; i++)
	{
		if (i == size - 1)
			break;

		else if (array[i] > array[i + 1])
		{
			holder = array[i];
			array[i] = array[i + 1];
			array[i + 1] = holder;
			print_array(array, size);
			i = -1;
		}
	}
}
