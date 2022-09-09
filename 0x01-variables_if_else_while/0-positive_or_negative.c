#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - assigning randon numbers to n
 *
 * Return: Randon num or nothing
 */

int main(void)
{
	srand(time(0));
	int n = (rand()-(RAND_MAX/2));

	if(n>0)
	{
		printf("%d is positive", n);
	}
	else if(n==0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
