#include "main.h"

/**
 * *_strpbrk - the function that searches a string for any of
 * a set of byte
 * @s: strings to be searched
 * @accept: strings to be checked
 * Return: \0
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
