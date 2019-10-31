#include "sort.h"

/**
 * power - Raises to a power
 * @base: Base
 * @expo: Exponent
 * Return: The power of the number
 */

int power(int base, unsigned int expo)
{
	unsigned int i = 0, result = 1;

	while (i < expo)
	{
		result = result * base;
		i++;
	};
	return (result);
}

/**
 * is_sorted - Cheks if an array is sorted
 * @arr_i: Copy of array of LSD
 * @size: Array's size
 * Return: 1 if sorted, 0 if not
 */

int is_sorted(int *arr_i, size_t size)
{
	int i = 0, value = 0;

	value = arr_i[i];

	for (i = 0; i < (int)size; i++)
	{
		if (value < arr_i[i])
			value = arr_i[i];
		else if (value == arr_i[i])
			value += 0;
		else if (value > arr_i[i])
			break;
	};

	if (i == (int)size)
		return (1);

	return (0);
}

/**
 *swap_compare - Makes the swap
 * @array: Array
 * @lsd: Less Significant Digit
 * @size: Array's size
 * Return: Nothing
 */

void swap_compare(int *array, int lsd, size_t size)
{
	unsigned int i;
	unsigned int number_i = 0, hold_number = 0, j, h, pos = 0;
	int *arr_i = malloc(sizeof(int) * size), is_true = 0;

	for (i = 0; i < size; i++)
	{
		number_i = (array[i] / power(10, lsd - 1)) % 10;
		arr_i[i] = number_i;
	};
	for (j = 0; is_true == 0 ; j++)
	{
		pos = j;
		for (h = j; h < size; h++)
		{
			if (arr_i[pos] > arr_i[h])
			{
				hold_number = array[h];
				array[h] = array[pos];
				array[pos] = hold_number;
				hold_number = arr_i[h];
				arr_i[h] = arr_i[pos];
				arr_i[pos] = hold_number;
			};
			if (arr_i[pos] == arr_i[h])
				pos = h;
		}
		if (j == size - 1)
			j = -1;
		if (is_sorted(arr_i, size))
			is_true = 1;
	}
	free(arr_i);
}

/**
 * get_digits - Gets the max num of digits
 * @array: Array
 * @size: Array's size
 * Return: Nothing
 */

int get_digits(int *array, size_t size)
{
	int i = 0, max_number = 0, count = 0;

	max_number = array[0];

	for (i = 0; i < (int)size; i++)
	{
		if (array[i] > max_number)
		max_number = array[i];
	};
	while (max_number != 0)
	{
		count++;
		max_number /= 10;
	}
	return (count);
}

/**
 * radix_sort - Radix sort Algorithm
 * @array: Array to sort
 * @size: Array's size
 * Return: Nothing
 */

void radix_sort(int *array, size_t size)
{
	int i, num_digits = 0;

	if (array == NULL || size < 2)
		return;

	num_digits = get_digits(array, size);

	for (i = 0; i < num_digits; i++)
	{
		swap_compare(array, i + 1, size);
		print_array(array, size);
	}
}
