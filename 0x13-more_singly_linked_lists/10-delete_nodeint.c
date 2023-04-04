#include "lists.h"

/**
 * delete_nodeint_at_index - this is a function that deletes the
 * node at index of a listint_t
 * @head: a pointer
 * @index: node index
 * Return: return 1 if successful else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *cpy = *head;
	unsigned int i;

	i = 0;
	if (cpy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	while (i < (index - 1))
	{
		if (cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
		i++;
	}

	node = cpy->next;
	cpy->next = node->next;
	free(node);
	return (1);
}
