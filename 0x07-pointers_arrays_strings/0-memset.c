#include "main.h"

/**
 * *_memcpy - a function that copies memory
 * @dest: destination parameter
 * @src: is a parameter`
 * @n: number o be checked
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		--n;
		++i;
	}
	return (dest);
}
