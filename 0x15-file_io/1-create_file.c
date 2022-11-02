#include "main.h"
#include <string.h>

/**
 * create_file - a function that creates a file.
 * @filename: file name
 * @text_content: Text content
 *
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, file;
	size_t len;

	char *size;

	size = malloc(sizeof(text_content));
	if (!size)
		return (-1);

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

	if (fd < 0)
		return (-1);

	len = strlen(text_content);

	file = write(fd, text_content, len);
	_putchar('\n');

	return ((file < 0) ? (-1) : 1);
}