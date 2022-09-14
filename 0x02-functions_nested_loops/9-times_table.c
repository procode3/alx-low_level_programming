#include "main.h"

/**
 * times_table - creates a times tables
 *
 * Return: 0
 */

void times_table(void)
{
	int a, b;
	int arry1[10][10];

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			arry1[a][b] = a * b;

		}
	}
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar(arry1[a][b]);
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
