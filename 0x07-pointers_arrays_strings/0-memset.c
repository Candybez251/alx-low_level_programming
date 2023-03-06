#include "main.h"

/**
 * _memset - memset is a function that fills memory
 * @s: is the memory address
 * @b: is the value to be filled in memory
 * @n: is the number of byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for ( i = 0; n > 0; i++)
		s[i] = b;
		n--;
	return (s);
}
