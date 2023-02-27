#include "main.h"

/**
 * print_rev - is a function
 * @s: sis an argument of the function print_rev
 * Return: void
 */

void print_rev(char *s)
{
	int length;

	length = 0;
	while (s[length])
	{
		length++;
	}
	while (length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
