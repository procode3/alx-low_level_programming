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
	char temp;

	for (len = 0; s[len] != 0; len++)
	{

	}


	for (i = 0; i < (len - 1); i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
