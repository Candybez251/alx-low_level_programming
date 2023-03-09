#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to be measured
 * Return: The length of a string.
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}