#include <stdio.h>

/**
 * main - starting point
 * Description: prpinting number using putchar
 * Return: 0
 */

int main(void)
{
	int num;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
