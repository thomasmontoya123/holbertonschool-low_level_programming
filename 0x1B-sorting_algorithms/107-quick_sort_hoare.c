#include "sort.h"
/**
 * swaper - swaps position values
 * @array: array
 * @i: value to swap
 * @j: value to swap
 * @size: size
 * Return: void
 */

void swaper(int array[], int i, int j, size_t size)
{
	int holder = 0;

	holder = array[i];
	array[i] = array[j];
	 array[j] = holder;
	print_array(array, size);

}

/**
 * hoare - hoare partition scheme
 * @array: array
 * @low: pointer value to evaluate
 * @hight: pointer value to evaluate
 * @size: size
 * Return: void
 */

int hoare(int array[], int low, int hight, int size)
{
	int pivot, i, j;

	pivot = array[hight];
	i = low - 1;
	j = hight + 1;

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);

		do {
			j--;
		} while (array[j] > pivot);

		if (i >= j)
			return  (j);

		swaper(array, i, j, size);
	}

}

/**
 * quick_sorter_hoare  - quick sort algorithm recursion
 * @array: array
 * @low: left compare
 * @hight: right compare
 * @size: size of the arry
 * @partition_index: partition index
 * Return: Nothing
 */

void quick_sorter_hoare(int *array, int low, int hight, size_t size,
int partition_index)
{
	int partition_index_new, left, right;

	partition_index_new = 0;
	left = 0;
	right = 0;

	if (low < hight)
	{
		partition_index_new = hoare(array, low, hight, size);
		if (partition_index == partition_index_new)
			partition_index = partition_index_new - 1;
		else
			partition_index = partition_index_new;
		left = partition_index;
		right = partition_index + 1;
		quick_sorter_hoare(array, low, left, size, partition_index);
		quick_sorter_hoare(array, right, hight, size, partition_index);
	}
}

/**
 * quick_sort_hoare - quick sort algorithm
 * @array: array
 * @size: size of the arry
 * Return: Void
 */

void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sorter_hoare(array, 0, size - 1, size, size);
}
