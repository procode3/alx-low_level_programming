#include "main"
#include <ctype.h>

/**
 * _islower - checks for lowercases
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
