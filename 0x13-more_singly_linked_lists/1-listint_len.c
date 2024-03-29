#include "lists.h"

/**
 * listint_len - this is a function that returns the number of elements
 * in a linked listint_t list
 * @h: a pointer to struct
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
