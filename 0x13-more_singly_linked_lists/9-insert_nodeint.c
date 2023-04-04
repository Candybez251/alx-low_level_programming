#include "lists.h"

/**
 * insert_nodeint_at_index - this is a function to insert a node
 * at a giving position
 * @head: a pointer
 * @idx: the index of the list
 * @n: the number
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *cpy = *head;
	unsigned int i;

	i = 0;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = cpy;
		*head = node;
		return (node);
	}
	while (i < (idx - 1))
	{
		if (cpy == NULL || cpy->next == NULL)
			return (NULL);
		cpy = cpy->next;
		i++;
	}
	node->next = cpy->next;
	cpy->next = node;

	return (node);
}
