#include "search_algos.h"
void print_array(int *arr, size_t size);
int bs(int *arr, size_t low, size_t high, int value);
/**
 * binary_search - perform a binary search in an array
 * @array: an int array
 * @size: size of array
 * @value: value to be searched
 * Return: index of value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int idx;
	size_t mid = (size - 1) / 2;

	if (array == NULL || size == 0)
		return (-1);

	print_array(array, size);

	if (array[mid] == value)
		return (mid);

	if (array[mid] > value)
		return (binary_search(array, mid, value));

	idx = binary_search(array + mid + 1, size - mid - 1, value);
	if (idx != -1)
		return (idx + mid + 1);
	else
		return (-1);
}

/**
 * print_array - prints an array
 * @arr: pointer to start of array
 * @size: size of array
 * Return: nothing
 */

void print_array(int *arr, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i != size - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
