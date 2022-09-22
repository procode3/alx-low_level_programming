#include "main.h"

/**
 * _strcmp - copies a string pointed to by the scr to the
 *	buffer pointed by the dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bites to be copied
 *
 * Return: char pointer
 */

int _strcmp(char *s1, char *s2)
{
	int flag = 0, i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
		{
			flag = -15;
			break;
		}
	if (flag == 0)
		return (0);
	else
		return (15);
}
