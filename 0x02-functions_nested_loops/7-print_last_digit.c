#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: the int value that will be parsed
 * Return: Int last digit
 */

int print_last_digit(int r)
{
	int l;

	while (r < 0)
	{
		r = -r;
	}
	l = r % 10;
	return (l);
}
