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
	unsigned int sum = 0, i;
	va_list va;

	va_startt(va, n);

	for (i = 0; i < n; i++)
		sum += va_arg(va, int);
	va_end(va);

	return (sum);
}
