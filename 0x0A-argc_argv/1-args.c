#include <stdio.h>
#include "holberton.h"

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

	for (count = 0; count < argc; count++)
		printf("%2d", count);
	return (0);
}
