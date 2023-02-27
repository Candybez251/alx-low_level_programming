#include "main.h"

/**
 * _strlen - returns the length of string.
 * @s: string
 * Return: l
 */

int _strlen(char *s)
{
	int l = 0;

	while (l != '\0')
	{
		l++;
		s++;
	}
	return (l);

