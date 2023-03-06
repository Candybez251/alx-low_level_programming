include "main.h"

/**
 * _strpbrk() - the function that searches for a set of bytes
 * @s: strings to be searched
 * @accept: strings to be checked
 * Return: 0
 */

int char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept != '\0'; k++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
