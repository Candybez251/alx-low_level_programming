#include "main.h"

/**
 * print_rev - to print reverse string
 * @s: string
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int length = 0;
	int m;

	while (str[length])
	{
		length++;
	}
	int rev;

	rev = 0;
	for (length >= rev)
	{
		_putchar(str[length]);
		length--;
	}
	_putchar('\n');
}
