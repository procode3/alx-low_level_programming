#include "main.h"

/**
 *  puts_half - prints half a string
 * @str: useless str
 *
 *  Return: a string
 */

void puts_half(char *str)
{
	int c, i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{

	}

	if (i % 2 == 0)
	{
		for (c = i / 2; *(str + c) != 0; c++)
		{
			putchar (*(str + c));
		}
	}
	if (i % 2 == 1)
	{
		for (c = i / 2; *(str + c) != 0; c++)
		{
			putchar (*(str + c));
		}
	}
	_putchar('\n');
}
