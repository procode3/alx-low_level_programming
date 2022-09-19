#include "main.h"

/**
 * swap_int - swaps two numbers
 * @a: useless int
 * @b: useless int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *(&b);
	*(&b) = *(&a);
	*(&a) = temp;
}
