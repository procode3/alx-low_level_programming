#include "main.h"

/**
 * factorial - factorial
 * @n: useless num
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if else(n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
