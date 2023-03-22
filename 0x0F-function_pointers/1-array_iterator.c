#include "function_pointers.h"

/**
 * array_iterator - this is a function that executes a function given
 * as a parameter on each element of an array.
 * @array: array name
 * @size: size of array
 * @action: a pointer to a function
 * @Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
