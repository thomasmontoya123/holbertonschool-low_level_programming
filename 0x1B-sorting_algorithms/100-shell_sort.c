#include "sort.h"

/**
 * case_two - Prints in case of 2 elems
 * @array: Array
 * @size: Array's size
 * Return: Nothing
 */

void case_two(int *array, size_t size)
{
	int value_zero = 0;

	if (array[0] > array[1])
	{
		value_zero = array[0];
		array[0] = array[1];
		array[1] = value_zero;
		print_array(array, size);
		return;
	};
	print_array(array, size);
}

/**
 * check_reverse - Checks values backwards from position
 * @array: Array
 * @position: Position to start
 * @knuth: Knuth sucesion value
 * Return: Nothing
 */

void check_reverse(int *array, unsigned int position, unsigned int knuth)
{
	int i, value_ch = 0, check = 1;

	for (i = position; i >= 0; i--)
	{
		if (check)
		{
			if (array[i - knuth] == array[0])
				check = 0;
			if (array[i] < array[i - knuth])
			{
				value_ch = array[i];
				array[i] = array[i - knuth];
				array[i - knuth] = value_ch;
				continue;
			}
		}
	}
}

/**
 * shell_sort - Shell sort algorithm
 * @array: Array
 * @size: Array's sort
 * Return: Nothing
 */

void shell_sort(int *array, size_t size)
{
	unsigned int knuth = 0, i, j, h;
	int value_ch = 0, arr_knuth[999];

	if (array == NULL || size < 2)
		return;
	for (i = -1; knuth <= size;)
	{
		knuth = (knuth * 3) + 1;
		i++;
		arr_knuth[i] = knuth;
	};
	i--;
	if (size == 2)
	{
		case_two(array, size);
		return;
	};
	knuth = arr_knuth[i];
	for (j = 0; j <= i; j++)
	{
		for (h = 0; h < size; h++)
		{
			if ((knuth + h) <=  size - 1)
			{
				if (h < size)
				{
					check_reverse(array, (knuth + h), knuth);
				}
				else if (array[h] > array[knuth + h])
				{ value_ch = array[knuth + h], array[knuth + h] = array[h];
				array[h] = value_ch; }
			}
		}
		if (knuth == 4)
			knuth = 1;
		else
			knuth = arr_knuth[i - 1];
		print_array(array, size);
	}
}
