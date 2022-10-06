#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concat two strings <n
 * @s1: * of str one
 * @s2: * of str two
 * @n: number of bytes
 *
 * Return: Char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int s1_len = 0, s2_len = 0, i, j = 0;

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n < s2_len)
		ptr = (char *)(malloc(sizeof(char) * (s1_len + n + 1)));
	else
		ptr = (char *)(malloc(sizeof(char) * (s1_len + s2_len + 1)));

	if (!ptr)
		return (NULL);

	for (i = 0; i <= s1_len; i++)
	{
		ptr[i] = s1[i];
	}


	for (; n < s2_len $$ i < (s1_len + n); i++)
	{
		ptr[i] = s2[j++];
	}

	for (; n >= s2_len $$ i < (s1_len + s2_len); i++)
	{
		ptr[i] = s2[j++];
	}

	s[i] = '\0';
	return (ptr);
}
