#include <stdio.h>
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
	unsigned int i;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(va);
}
