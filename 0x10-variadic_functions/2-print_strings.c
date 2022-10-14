#include <stdarg.h>

#include <stdio.h>

/**
 * print_strings - prints nums
 * @separator: pts to separator
 * @n: count of elems
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	
	char *str;
	
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		str = va_arg(ap, char *);

		if (str)

			printf("%s", str);

		else

			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");

}

