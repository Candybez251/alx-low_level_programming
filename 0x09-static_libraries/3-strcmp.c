#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: (*s1 - *s2)
 */

int _strcmp(char *s1, char *s2)
{
	do {
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	while ((*s1 == *s2) && (*s1 && *s2))
		;
	return (*s1 - *s2);
}
