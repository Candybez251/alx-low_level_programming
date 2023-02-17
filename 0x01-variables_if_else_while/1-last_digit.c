#include <stdio.h>
#include <stdlb.h>
#include <time.h>

/**
 * main - a program that prints the last digit of a number
 * and whether it is greater than 5,less than6, or 0.
 *
 * Return (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int L;

	L = n % 10

	if (L > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, L);
	}
	else if (L == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, L);
	}
	else(L < 6 && L != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, L);
	}
	return (0);
}
