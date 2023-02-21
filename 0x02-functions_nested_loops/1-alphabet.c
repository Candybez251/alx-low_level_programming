#include "main.h"

/**
 *main - check the code
 *Description: a function that prints the alphabet, in lowercase
 *Return: void
 */

void print_alphabet(void)
{

	char n;

	for(n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

