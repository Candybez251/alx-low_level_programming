#include "main.h"

/**
 * print_line - printsstraight line n times.
 * @n: times straight line is printed.
 * return (0);
 */

void print_line(int n)
{
	int start_p = 0;

	while (start_p < n)
	{
		if (n > 0)
		{
			_putchar('_');

		}

		start_p++;
	}

	_putchar("\n");
}
