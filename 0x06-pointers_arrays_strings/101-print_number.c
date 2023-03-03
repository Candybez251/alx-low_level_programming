#include "main.h"

/**
 * print_number - a function that prints a number
 * @n - an integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int passN = n;

	if (n < 0)
	{
		_putchar('-');
		passN = -passN;
	}

	if ((passN / 10) > 0)
		print_number(passN / 10);

	_putchar((passN % 10) + '0');
}
