#include "main.h"
#include <stdlib>
#include <strlib>

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
	int s1_len, s2_len, i, j = 0, t;

	if (s1 == NULL)
		return ("");

	if (s2 == NULL)
		return ("");

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	t = s1_len + s2_len + 1;

	ptr = (char *)(malloc(sizeof(char) * t);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= s1_len; i++)
	{
		ptr[j++] = s1[i];
	}


	for (i = 0; i <= n; i++)
	{
		ptr[j++] = s2[i];
	}
	free(ptr);
	return (ptr);
}
