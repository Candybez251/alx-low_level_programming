#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenates two strings
 * @s1: destination string
 * @s2: string to be concatenate
 * Return: pointer to the array, NULL if fail
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, len = 0, concat_len = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] || s2[2])
	{
		len++;
		i++;
	}

	concat = malloc(len * sizeof(char));

	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat[concat_len++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[concat_len++] = s2[i];

	return (concat);
}
