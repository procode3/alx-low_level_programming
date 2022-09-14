#include "main.h"

/**
 * print_sign - prints the sign of an integer
 * @n: integer that will be parsed
 *
 * Return: 1 or 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (_putchar('+'));
		return (_putchar('1'));
	}
	else if (n == 0)
	{
		return (_putchar('0'));
	}
	else
	{
		return (_putchar('-'));
		return (_putchar('1'));
	}
}
