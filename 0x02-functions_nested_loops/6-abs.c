#include "main.h"

/**
 * _abs - Returns the absolute of a number
 * @r: the integer that will be passed
 *
 * Return; Zer0 (0)
 */

int _abs(int r)
{
	while (r < 0)
	{
		r = r * -1;
	}

	return (r);
}
