#include <stdio.h>
#include <stdarg.h>
#include <variadic_functions.h>

/**
 * print_strings - a function that prints strings
 * @separator: a string to be printed between the strings
 * @n: number of strings to be printed
 * @...: additional strings argument
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	char *s;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(va, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && s != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(va);
}
