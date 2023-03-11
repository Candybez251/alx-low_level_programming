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
	printf ("%d\n", argc - 1);
	return (0);
}
