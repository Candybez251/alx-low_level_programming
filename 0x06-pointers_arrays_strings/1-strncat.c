#include "main.h"

/**
 * _strncat - strcat is a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of times
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, destLen = 0;

	while (dest[i++])
		destLen = destLen + 1;
	for (i = 0; src[i]; i++)
	{
		if (i < n)
		{
			dest[destLen++] = src[i];
		}
	}
	return (dest);
}
