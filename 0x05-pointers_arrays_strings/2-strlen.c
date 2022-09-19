#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != 0)
		i++;
	return(i);
}
