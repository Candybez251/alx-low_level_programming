#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @arr: an array pointer
 * Description: a function that encodes a string into 1337.
 * Return: arr
 */

char *leet(char *arr)
{
	int i = 0, j;
	char let[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (arr[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (arr[i] == let[j] ||
			    arr[i] - 32 == let[j])
				arr[i] = j + '0';
		}

		i++;
	}

	return (arr);
}
