#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * @array: array
 * @size: array size
 * @value: value to search
 * Return: array index
 */

int jump_search(int *array, size_t size, int value)
{
	size_t previous, step;

	if (!array)
		return (-1);

	printf("Value checked array[0] = [%i]\n", array[0]);
	if (array[0] == value)
		return (0);

	previous = 0;
	step = sqrt(size);

	while ((step < size) & (array[step] < value))
	{
		printf("Value checked array[%li] = [%i]\n", step, array[step]);
		previous = step;
		step += sqrt(size);
		if (previous >= size)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", previous, step);
	while ((previous < size) & (array[previous] <= value))
	{
		printf("Value checked array[%lu] = [%i]\n", previous, array[previous]);

		if (array[previous] == value)
			return (previous);

		previous++;
	}
	return (-1);
}
