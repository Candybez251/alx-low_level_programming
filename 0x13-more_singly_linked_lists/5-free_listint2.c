#include "lists.h"

/**
 * free_listint2 - this function frees listint_t
 * @head: a pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head == NULL)
		return;
	while (*head)
	{
		fr = *head;
		*head = (*head)->next;
		free(fr);
	}
	*head = NULL;
}
