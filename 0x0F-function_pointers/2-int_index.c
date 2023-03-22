#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array name
 * @cmp: pointer to a function
 * Return: (-1)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int srcArr = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	while (size > 0)
	{
		if (cmp(array[srcArr]) != 0)
		{
			return (srcArr);
		}
		srcArr++;
		size--;
	}
	return (-1);
}
