#include "search_algos.h"

/**
 * printer - prints the array
 * @array: array
 * @first: first position to print
 * @last: last position to print
 * Return: void
 */

void printer(int *array, int first, int last)
{
	int print_counter = 0;

	if (first < last)
		printf("Searching in array: ");
	while (first < last)
	{
		printf("%d", array[first]);
		if (first < last - 1)
			printf(", ");
		first++;
		print_counter++;
	}
	if (print_counter > 0)
		printf("\n");
}

/**
 * recurssion - auxiliar recursive function
 * @array: array
 * @left: left position
 * @right: right position
 * @value: value to search
 * Return: array index
 */

int recurssion(int *array, int left, int right, int value)
{
	int middle;

	if (right >= left)
	{
		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);

		if (array[middle] > value)
		{
			printer(array, left, middle);
			return (recurssion(array, left, middle - 1, value));
		}
		printer(array, middle + 1, right + 1);
		return (recurssion(array, middle + 1, right, value));
	}
	return (-1);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array
 * @size: array size
 * @value: value to search
 * Return: array index
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	printer(array, 0, size);
	return (recurssion(array, 0, size - 1, value));
}
