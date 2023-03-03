#include "main.h"

/**
 * print_number - a function that prints integers
 * @n: integer variable.
 * Return: void
 */

void print_number(int n)
{
	unsigned int passn = n;

	if (n < 0)
	{
		_putchar('-');
		passn = -passn;
	}

	if ((passn / 10) > 0)
		print_number(passn / 10);

	_putchar((passn % 10) + '0');
}
