#include "main.h"

/**
 * _strstr - a function that finds the first occurrence of the substring
 * @haystack: a string input to be looked in
 * @needle: a string input to look for in haystack
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
		int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}

	return ('\0');
}
