#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints char on even psn
 * @str: useless str
 *
 * #Return: nothing
 */

void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
		{
			putchar(str[c]);
		}

	}
	putchar('\n');
}

