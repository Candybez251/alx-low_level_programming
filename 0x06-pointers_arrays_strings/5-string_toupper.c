#include "main.h"

/**
 * string_toupper - a function that changes all lowercase to upper
 * @up_case: a string
 * Return: the up_case string
 */

char *string_toupper(char *up_case)
{
	int i = 0;

	while (up_case[i])
	{
		if (up_case[i] >= 97 && up_case[i] <= 122)
		{
			up_case[i] -= 32;
		}
		i++;
	}
	return (up_case);
}
