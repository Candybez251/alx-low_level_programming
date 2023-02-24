#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number of times it prints
 * Return: return nothing
 */

void print_diagonal(int n)
{
	int count, cs;

	count = 0;
	while (n > 0)
	{
		cs = count;
		while (cs > 0)
		{
			_putchar(' ');
			cs--;
		}
		_putchar('\\');
		_putchar('\n');
		count++;
		n--;
	}
	if (count == 0)
	{
		_putchar('\n');
	}
}
