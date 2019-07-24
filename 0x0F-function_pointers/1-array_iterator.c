#include "function_pointers.h"
/**
 * array_iterator - executes a function.
 * @array: array of functions
 * @size: size of array
 * @action: action to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0)
	{
		return;
	}

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}

}
