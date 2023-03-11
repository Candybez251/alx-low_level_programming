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
	int i, answer = 0;

	if (argc != 3)
	{
		printf("0\n");
	}
	if (isdigit(argc) && isdigit(argv))
	{
		for (i = 1; i < argc; i++)
		{
			answer += atoi(argv[i]);
		}
		print ("%d\n", answer);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
