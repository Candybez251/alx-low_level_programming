#include <stdio.h>

/**
 * main - starting or entry point
 * Description: a C program that prints the size of various types
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)", sizeof(long long int));
	Printf("Size of a float: %ld byte(s)", sizeof(float));
	return (0);
}
