#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - this is a function that adds two strings
 * @s1: destination string
 * @s2: string to be added
 * @n: length of s2
 * Return: null if string1 is equal to null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string1;
	unsigned int len = n, i, sLen = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	string1 = malloc(sizeof(char) * (len + 1));

	if (string1 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		string1[sLen++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		string1[sLen++] = s2[i];

	string1[sLen] = '\0';

	return (string1);
}
