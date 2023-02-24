#include "main.h"

/**
 * more_numbers - prints numbers between 0 and 14
 * 10 times.
 * return (0);
 */

void more_numbers(void)
{
	int i, store_num;
	int num;

	num = 0;
	while (num < 10)
	{
		for (i = 0; i < 15; i++)
		{
			store_num = i;
			if (i > 9)
			{
				_putchar('1');
				store_num = i % 10;
			}
			_putchar(store_num + '0');
		}
		_putchar('\n');
		num++;
	}
}
