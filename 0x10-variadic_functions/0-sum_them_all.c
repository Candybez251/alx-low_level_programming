#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: sum of numbers
 * @...: additional arguments
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i, sum = 0;

	va_start(va, n);

	for (i = 0; i < n; i++)
		sum += va_arg(va, int);

	va_end(va);

	return (sum);
}
