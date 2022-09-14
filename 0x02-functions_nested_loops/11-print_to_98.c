#include "main.h"

/**
 * print_to_98  - printing ints fron n to 98
 * @n: int parsed
 *
 * Return: Zero (0)
 */

void print_to_98(int n)
{
	int i;

	if (n > 99)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i / 100 + '0');
			_putchar((i / 10) % 10 + '0');
			_putchar(i % 10 + '0');

		}
	}
	else if (n < 100 && n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');

		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
	}
}
