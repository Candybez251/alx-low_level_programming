#include <stdlib>
#include "main.h"

/**
 * *array_range - this is  a function that creates an array of integers.
 * @min: starting point of the array
 * @max: end of the array
 * Return: null if min is greater than max and Null if arr fails.
 */

int *array_range(int min, int max)
{
	int *arr, i, arrSize;

	if (min > max)
		return (NULL);

	arrSize = max - min + 1;
	arr = malloc(arrSize * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < arrSize; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
