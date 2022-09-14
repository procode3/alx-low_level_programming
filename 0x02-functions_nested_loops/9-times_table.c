#include "main.h"

/**
 * times_table - creates a times tables
 *
 * Return: 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0;  b < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			c = a * b;
			if (c <= 9)
			{
				_putchar(a + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		_putchar('\n');
		}

	}
}
