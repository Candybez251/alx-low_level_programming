#include "main.h"

/**
 * reverse_array -  I am a kind of paranoid in reverse
 * @a: is the an array of integers
 * @n: is an integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp, e;

	e = n - 1;
	for (i = 0; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[e];
		a[e] = temp;
		e--;
	}
}
