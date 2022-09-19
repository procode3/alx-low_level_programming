#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: useless str
 *
 * Return: noting
 */

void rev_string(char *s)
{
	int len, i;
	char *lst, *1st, temp;

	for (len = 0; s[len] != 0; len++)
	{

	}
	1st = string;
	lst = string;


	for (i = 0; i < (len - 1); i++)
	{
		lst++;
		for (i = 0; i < len / 2; i++)
		{
			temp = *lst;
			*lst = *1st;
			*1st = temp;

			1st++;
			lst--;
		}
		_putchar(s[i]);
	}
	_putchar('\n');
}
