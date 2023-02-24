#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminanl
 * @n: an argument
 * Return: void
 */

void print_line(int n)
{
	int start_point;

	start_point = 0;
	while (n > 0 && start_point < n)
	{
		_putchar('_');
		start_point++;
	}

	_putchar('\n');
}
