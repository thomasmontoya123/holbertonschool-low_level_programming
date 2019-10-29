#include "sort.h"

/**
 * counting_sort - counting sort algorithm
 * @array: Array of Ints
 * @size: Array's size
 * Return: Nothing
 */

void counting_sort(int *array, size_t size)
{
	int range = 0, j;
	size_t i;
	int *counting, *sorted_array;

	if (!array || size < 2)
		return;
	range = array[0];

	for (i = 1;  i < size; i++)
		if (array[i] > range)
			range = array[i];

	range++;

	counting = malloc(sizeof(int) * range);
	if (!counting)
		return;
	sorted_array = malloc(sizeof(int) * size);
	if (!sorted_array)
	{
		free(counting);
		return;
	}
	for (i = 0; i < size; i++)
		counting[array[i]]++;

	for (j = 1; j < range; j++)
		counting[j] += counting[j - 1];

	print_array(counting, range);
	for (i = 0; i < size; i++)
	{
		sorted_array[counting[array[i]] - 1] = array[i];
		counting[array[i]]--;
	}

	for (i = 0; i < size; i++)
		array[i] = sorted_array[i];
	free(counting);
	free(sorted_array);
}
