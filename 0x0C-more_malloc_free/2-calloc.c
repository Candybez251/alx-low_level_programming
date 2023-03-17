#include <stdlib.h>
#include "main.h"

/**
 * _calloc - this is a function that allocates memory
 * for an array, using malloc
 * @nmemb: memory to be allocated
 * @size: sizr of array
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * if malloc fails, then _calloc returns NULL, else return
 * pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i = 0;
	char *c;

	if (size == 0)
		return (NULL);
	if (nmemb == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	c = p;

	while (i < (size * nmemb))
	{
		c[i] = '\0';
		i++;
	}
	return (p);
}
