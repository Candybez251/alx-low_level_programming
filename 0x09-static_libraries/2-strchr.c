#include "main.h"

/**
 * *_strchr - is a function that locates a character in a string
 * @s: string to be searched
 * @c: variable to be located
 * Return: s + i
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
