#include "main.h"

/**
 * print_rev - to print reverse string
 * @str: string
 * Return: void
 */
void print_rev(char *s)
{
	int length;
	
	length = 0;
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
