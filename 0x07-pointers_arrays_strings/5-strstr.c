#include "main.h"

/**
 * *_strstr - a function that finds the first occurrence of the substring
 * @haystack: a string to be looked in
 * @needle: a string to look for in haystack
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (*haystack = 0; *haystack != '\0'; *haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
