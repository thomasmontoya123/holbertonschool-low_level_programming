#include "sort.h"
/**
 * top_down_merge  - top down merge
 * @arrray: array
 * @first: first value
 * @middle: middle value
 * @last: last value
 * @copy_array: array copy
 * Return: void
 */

void top_down_merge(int arrray[], int first, int middle,
int last, int copy_array[])
{
	int i, j, k;

	i = first;
	j = middle;

	if (arrray)
	{
		printf("Merging...\n");
		printf("[left]: ");
		print_array(arrray +  first, middle - first);
		printf("[right]: ");
		print_array(arrray + middle, last - middle);
	}

	for (k = first; k < last; k++)
	{
		if (i < middle && (j >= last || arrray[i] <= arrray[j]))
		{
			copy_array[k] = arrray[i];
			i++;
		}
		else
		{
			copy_array[k] = arrray[j];
			j++;
		}

	}
	printf("[Done]: ");
	print_array(copy_array + first, last - first);

}

/**
 * top_down_merge_split  - top down merge
 * @copy_array: array copy
 * @first: first value
 * @last: last value
 * @array: array
 * Return: void
 */

void top_down_merge_split(int *copy_array, int first, int last, int *array)
{
	int middle;

	if (last - first < 2)
		return;

	middle = (last + first) / 2;

	top_down_merge_split(array, first, middle, copy_array);
	top_down_merge_split(array, middle, last, copy_array);
	top_down_merge(copy_array, first, middle, last, array);

}

/**
 * merge_sort  - merge sort algorithm
 * @array: array
 * @size: array size
 * Return: void
 */

void merge_sort(int *array, size_t size)
{
	int *copy_array;
	unsigned int i;

	copy_array = malloc(sizeof(int) * size);
	if (!copy_array)
		return;

	for (i = 0; i < size; i++)
		copy_array[i] = array[i];

	top_down_merge_split(copy_array, 0, size, array);
	free(copy_array);
}
