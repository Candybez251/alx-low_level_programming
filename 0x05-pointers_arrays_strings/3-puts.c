#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string to print
 * Return: 0.
 */

void _puts(char *str)
{
	*str = 0;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
