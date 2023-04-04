#include "lists.h"

/**
 * get_nodeint_at_index - this is a function that returns the
 * nth node of a listint_t
 * @head: a pointer to struct
 * @index: node index
 * Return: the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
