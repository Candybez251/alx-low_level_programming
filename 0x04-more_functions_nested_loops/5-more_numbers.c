#include "main.h"

/**
 * more_numbers - prints numbers between 0 and 14
 * 10 times.
 * return (0);
 */

void more_numbers(void)
{
	char number, store_num;
	int numx10;

	numx10 = 0;
	while (numx10 < 10)
	{
		number = 0;
		while (number <= 14)
		{
			store_num = number;
			if (number > 9)
			{
				_putchar('1');
				store_num = number % 10;
			}
			_putchar('0' + store_num);
			number++;
		}

		_putchar('\n');
		numX10++;
	}
}
