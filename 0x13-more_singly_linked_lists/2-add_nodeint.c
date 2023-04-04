#include "lists.h"

/**
 * add_nodeint - this is a function that adds a new node at
 * the beginning of a listint_t list
 * @head: a pointer
 * @n: the integer to be added
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
