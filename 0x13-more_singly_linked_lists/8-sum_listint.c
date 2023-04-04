#include "lists.h"

/**
 * sum_listint - this is a function that returns the
 * sum of all the data (n) of a listint_t
 * @head: a pointer
 * Return: zero
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
