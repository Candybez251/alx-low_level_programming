#include "main.h"

/**
 * reverse_array -  I am a kind of paranoid in reverse
 * @a: is the an array of integers
 * @n: is an integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i <= a[i])
	{
		n = n - 1;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
