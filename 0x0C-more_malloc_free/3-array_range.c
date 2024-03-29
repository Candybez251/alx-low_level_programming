#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integer
 * @min: first array index.
 * @max: last array index.
 * Return: null if array fails or min > max. else arr
 */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
