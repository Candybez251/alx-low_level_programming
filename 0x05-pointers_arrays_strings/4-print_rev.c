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

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (m = length; m > 0; m++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
