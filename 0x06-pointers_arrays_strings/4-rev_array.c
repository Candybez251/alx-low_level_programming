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
	n = n - 1;
	while (i <= a[i])
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
