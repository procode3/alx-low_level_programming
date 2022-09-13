#include <stdio.h>

/**
 * main - a program that prints _putchar
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char vname[] = "_putchar";

	for (i = 0; i < 80; i++)
	{
		if (vname[i] == '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(vname[i]);
		}
	}
	putchar('\n');
	return (0);
}
