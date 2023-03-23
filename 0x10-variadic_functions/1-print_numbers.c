#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: the strings to be printed between the numbers
 * @n: numbers of integers passed to the function
 * @...: additional arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i, num;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(va, int);
		printf("%d", num);

		if (i != (n - 1))
			printf("%c ", *separator);
	}
}
