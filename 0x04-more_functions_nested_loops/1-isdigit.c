#include "main.h"

/**
 * _isdigit - function
 * @c: argument
 * Return: return 1 if true but  0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
