#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anythinh
 * @format: a list of types of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list va;
	int i = 0;
	char *s, *separator = "";

	va_start(va, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 's':
					s = va_arg(va, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				case 'i':
					printf("%s%d", separator, va_arg(va, int));
					break;
				case 'c':
					printf("%s%c", separator, va_arg(va, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(va, double));
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(va);
}
