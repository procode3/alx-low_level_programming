#include <stdio.h>

/**
 * main - display aphabest in both lowercase and uppercase
 *
 * Return: return aplhabet characters or nothing
 */

int main(void)
{
	for(int l_case='a'; l_case<='z'; l_case++)
	{
		putchar(l_case);
	}
	for(int u_case='A'; u_case<='Z'; u_case++)
	{
		putchar(u_case);
	}
	return (0);
}
