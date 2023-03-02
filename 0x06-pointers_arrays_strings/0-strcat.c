#include "main.h"

/**
 * _strcat - strcat is a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Description: a function that concatenates two strings.
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end
 * of dest, and then adds a terminating null byte
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, destLen = 0;

	while (dest[i++])
	{
		destLen++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[destLen++] = src[i];
	}
	return (dest);
}
