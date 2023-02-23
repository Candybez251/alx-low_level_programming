#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0 to 9
 * Return: void
 */

int print_numbers(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
