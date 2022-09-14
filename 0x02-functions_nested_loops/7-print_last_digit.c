#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: the int value that will be parsed
 * Return: Int last digit
 */

int print_last_digit(int n)
{
	int l;

	while (n < 0)
	{
		n = -n;
	}
	l = n % 10;
	while (l < 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l);
}
