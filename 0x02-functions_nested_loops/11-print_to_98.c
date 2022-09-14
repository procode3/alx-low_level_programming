#include "main.h"

/**
 * print_to_98  - printing ints fron n to 98
 * @n: int parsed
 *
 * Return: Zero (0)
 */

void print_to_98(int n)
{
	int i, j;

	if (n >= 99)
	{

		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');

		for (i = n - 1; i > 99; i--)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i / 100 + '0');
			_putchar((i / 10) % 10 + '0');
			_putchar(i % 10 + '0');

		}
		for (j = 99; j >= 98; j --)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
	else if (n < 98 && n >= 10)
	{
		_putchar(n % 10 + '0');
		_putchar(n % 10 + '0');

		for (i = n + 1; i <= 98; i++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');

		}
		_putchar('\n');
	}
	else
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');

		for (i = n + 1; i <= 98; i++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
	}
}
