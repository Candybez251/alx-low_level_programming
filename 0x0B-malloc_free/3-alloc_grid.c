#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: ptr
 */

int **alloc_grid(int width, int height)
{
	int **ptr, column, row;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc((width * height) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (column = 0; column < height; column++)
	{
		ptr[column] = malloc(sizeof(int) * width);

		if (ptr[column] == NULL)
		{
			for (; column >= 0; column--)
				free(ptr[column]);

			free(ptr);
			return (NULL);
		}
	}

	for (column = 0; column < height; column++)
	{
		for (row = 0; row < width; row++)
			ptr[column][row] = 0;
	}

	return (ptr);
}
