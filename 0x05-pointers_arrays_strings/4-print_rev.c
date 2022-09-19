#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: useless str
 *
 * Return: noting
 */

void print_rev(char *s)
{
	int c, len, tmp;

	len = 0;
	tmp = len - 1;
	for (len = 0; s[len] != 0; len++)
	{

	}

	for (c = tmp; c >= 0; c--)
	{
		if (s[c] == ' ')
		{
			s[c] = '\0';
			s = &(s[c]) + 1;
		}
	}
	
}
