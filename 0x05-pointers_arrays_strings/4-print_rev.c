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

	len = _strlen(s);

	for (c = 0; c < len / 2; c++)
	{
		tmp = s[c];
		s[c] = s[len - c - 1];
		s[len - i - 1] = tmp;
	}
}
