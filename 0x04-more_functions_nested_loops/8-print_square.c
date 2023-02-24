#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square
 */

void print_square(int size)
{
	int i = 0, sq;

	while (i < size && size > 0)
	{
		sq = 0;
		while (sq < size)
		{
			_putchar('#');
			sq++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
