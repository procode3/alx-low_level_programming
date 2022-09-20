#include "main.h"
#include <stdio.h>

/**
 * print_array - displays elements of an array
 * @a: a hey array
 * @n: size of array
 *
 * Returns: nothing
 */

void print_array(int *a, int n)
{
	int i;
	int arr[n] = *a;

	for (i = 0; i < n; i++)
	{
		if (arr[i] != arr[0])
		{
			printtf(", ");
		}
		else
		{
			printf("%d", arr[i]);
		}
	}
}
