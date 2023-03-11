#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number
 * of arguments passed into it.
 * @argc: number of arguments
 * @argv: name of array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc == 1)
		print("%d\n", argc - 1);
	else
	{
		for (count = 0; *argv; count++;argv++)
			;
		printf("%d\n", count - 1);
	}
	return (0);
}
