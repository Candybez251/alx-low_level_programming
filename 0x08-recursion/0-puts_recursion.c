include "main.h"

/**
 * _puts_recursion - A function that prints a string
 * @s: input string
 * Return - 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*S);
		_puts_recursions(s + 1);
	}
	else
		_putchar('\n');
}
