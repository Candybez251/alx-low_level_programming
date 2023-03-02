#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: integer variable
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srcLen = 0;

	while (src[i++])
	{
		srcLen = srcLen + 1;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = srcLen; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
