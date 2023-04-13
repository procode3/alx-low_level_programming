#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: array provided
 * @size: size of array
 * @value: value to be searched
 * Return: index or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
