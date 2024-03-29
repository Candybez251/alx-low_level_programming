#include "function_pointers.h"

/**
 * array_iterator - this is a function that executes a function given
 * as a parameter on each element of an array.
 * @array: array name
 * @size: size of array
 * @action: a pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
