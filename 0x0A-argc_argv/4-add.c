#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - a program that adds positive numbers.
 * @argc: number
 * @argv: name array
 * Return: return 1 if one number contains a symbol
 */

int main(int argc, char *argv[])
{
	int i, ans, len, j;
	char *arr;

	if (argc != 3)
	{
		printf("0\n");
	}
	else
	{
		ans = 0;
		for (i = 1; i < argc; i++)
		{
			arr = argv[i];
			len = strlen(arr);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(arr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			ans += atoi(argv[i]);
		}

		printf("%d\n", ans);
	}
	return (0);
}
