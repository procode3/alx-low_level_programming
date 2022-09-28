#include "main.h"

/**
 * _puts_recursion -printf wannabe!
 * @s: useless string
 * Return: 0
 */


void _puts_recursion(char *s)
{
	int i;

	if (i != '\0')
	{
		return (0);
	}
	else
	{
		_puts_recursion(s)
	}
	_putchar(s);
}
