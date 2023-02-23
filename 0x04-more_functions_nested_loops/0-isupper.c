#include "main.h"

/**
 * _isupper - function for checking uppercase character
 * @c: integer variable argument
 * Return: return 1 if true but 0 if false
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
