#include "sort.h"

/**
 * swaper - swaps position values
 * @array: array
 * @i: value to swap
 * @j: value to swap
 * @real_size: real size of the array
 * Return: void
 */

void swaper(int array[], int i, int j, size_t real_size)
{
	int holder = array[i];

	if (array[i] == array[j])
		return;

	array[i] = array[j];
	array[j] = holder;
	print_array(array, real_size);

}

/**
 * heapify - heapify the tree
 * @array: array
 * @size: size after recursion.
 * @i: value child
 * @real_size: real_size of the array
 * Return: void
 */

void heapify(int array[], int  size, int i,  size_t real_size)
{
	int max = i;
	int left = 2 * i  + 1;
	int right = 2 * i + 2;

	if (left < size  && array[left] > array[max])
		max = left;
	if (right < size && array[right] > array[max])
		max = right;

	if (max != i)
	{
		swaper(array, i, max, real_size);
		heapify(array, size, max, real_size);
	}
}

/**
 * heap_sort - heap sort algorithm
 * @array: array
 * @size: size of the array
 * Return: void
 */

void heap_sort(int *array, size_t size)
{
	int i;
	size_t real_size = size;

	if (!array || size < 2)
		return;

	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, i, real_size);
	for (i = size - 1; i >= 0; i--)
	{
		swaper(array, 0, i, real_size);
		heapify(array, i, 0, real_size);
	}
}
