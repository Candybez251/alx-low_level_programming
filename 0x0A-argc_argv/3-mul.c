#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program should print the result of the multiplication
 * @argc: number
 * @argv: name of array
 * Return: 1 if there's only one argument, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int answer;

	if (argci == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		answer = (atoi(argv[1])) * (atoi(argv[2]));
		printf("%d\n", answer);
	}
	return (0);
}
