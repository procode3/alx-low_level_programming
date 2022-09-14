#include "main.h"

/**
 * jack_bauer - printing every minute of the day
 *
 *Return: Zero (0).
 */

void jack_bauer(void)
{
	int h, m;
	
	int h =0;

	while (h <= 24)
	{
		m = 0;
		while (m <= 60)
		{
			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			putchar(':');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			m++;
		}
		h++;
	}
}
