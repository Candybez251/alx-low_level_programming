#include "lists.h"

/**
 * free_listint - this function frees a listint_t list
 * @head: a pointer to struct
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t fr;

	while (head)
	{
		fr = head;
		head = head->next;
		free(fr);
	}
}
