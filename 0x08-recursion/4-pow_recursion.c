#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x^y
 * @x: an input to be raised
 * @y: an input to power x to
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
