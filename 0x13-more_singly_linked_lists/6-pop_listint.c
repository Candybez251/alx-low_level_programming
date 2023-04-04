#include "lists.h"

/**
 * pop_listint - this is a function that deletes the head node of
 * listint_t
 * @head: a pointer to struct
 * Return: the node
 */

int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int n;

	if (!*head)
		return (0);

	node = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(node);

	return (n);
}
