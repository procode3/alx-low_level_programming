#include "main.h"

/**
 * _memcpy - copys n bytes from src to dest
 * @dest: desination
 * @src: Source
 * @n: unsigned int
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; dest[i] != '\0'; i++)
	{


	}
	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i + 1] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}
