#include <stdio.h>

/**
 * main - print single digits to base 10
 *
 * Return: return single digit or nothing
 */

int main(void)
{
	for(int i=10; i<=19; i++)
	{
		int n = i%10;
		putchar (n%10 + '0');
	}
	return (0);
}
