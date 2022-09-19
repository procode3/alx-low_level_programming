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
	char *lst, *fst, temp;

	for (len = 0; s[len] != 0; len++)
	{

	}
	fst = s;
	lst = s;


	for (i = 0; i < (len - 1); i++)
	{
		lst++;
		for (i = 0; i < len / 2; i++)
		{
			temp = *lst;
			*lst = *fst;
			*fst = temp;

			fst++;
			lst--;
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
