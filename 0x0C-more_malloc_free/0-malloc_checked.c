#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - this function allocates memory using malloc
 * @s: things to be allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
