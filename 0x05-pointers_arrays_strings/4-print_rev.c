#include "main.h"

/**
 * print_rev - prints string in reverse
 * _slen - calculates str len
 * @s: useless str
 *
 * Return: noting
 */

int _slen(char *s)
{
	int i;

	i = 0;
	for (i = 0; s[i] != 0; i++)
	{

	}
	return (i);
}

void print_rev(char *s)
{
	int c, len, tmp;

	len = _slen(s);

	for (c = 0; c < len / 2; c++)
	{
		tmp = s[c];
		s[c] = s[len - c - 1];
		s[len - c - 1] = tmp;
	}
}
