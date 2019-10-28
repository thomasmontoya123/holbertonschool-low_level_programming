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
 * lomuto - Lomuto partition scheme
 * @array: array
 * @low: left compare
 * @hight: right compare
 * @size: size of the arry
 * Return: position of the partition
 */

int lomuto(int array[], int low, int hight, int size)
{
	int pivot, i, j, flag = 0;

	pivot = array[hight];
	i = low - 1;

	for (j = low; j <= hight - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swaper(array, i, j);
			if (i != j)
			{
				flag = 0;
				print_array(array, size);
			}
			if (i == j)
				flag = 1;
		}
		flag = 0;
	}
	if (array[i + 1] != array[hight])
	{
		swaper(array, i + 1, hight);
		if (i != j && flag == 0)
			print_array(array, size);
	}
	return (i + 1);


}

/**
 * quick_sorter - quick sort algorithm recursion
 * @array: array
 * @low: left compare
 * @hight: right compare
 * @size: size of the arry
 * Return: Nothing
 */

void quick_sorter(int *array, int low, int hight, size_t size)
{
	int partition_index, left, right;

	partition_index = 0;
	left = 0;
	right = 0;

	if (low < hight)
	{
		partition_index = lomuto(array, low, hight, size);
		left = partition_index - 1;
		right = partition_index + 1;
		quick_sorter(array, low, left, size);
		quick_sorter(array, right, hight, size);
	}
}

/**
 * quick_sort - quick sort algorithm
 * @array: array
 * @size: size of the arry
 * Return: Void
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sorter(array, 0, size - 1, size);
}
