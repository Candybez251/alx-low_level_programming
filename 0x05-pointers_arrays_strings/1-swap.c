#include "main.h"

/**
 * swap_int - to swap a and b
 * @a: number to swap
 * @b: number to swap
 */

void swap_int(int *a, int *b)

{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}


