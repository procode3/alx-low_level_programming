#include <stdio.h>

/**
 * main - printing letters of alphabet except q and e
 *
 * Return: Included alphabets or nothing
 */

int main(void)
{
	for(int a='a'; a<='z'; a++)
	{
		if(a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
	return (0);
}
