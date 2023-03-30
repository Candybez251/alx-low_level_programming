#include "lists.h"

/**
 * add_node - a function that adds a new node at the
 * beginning of a list_t list.
 * @head: pointer to the head of a linked list
 * @str: strings to be added
 * Return: if new_nd is equal to null, return null
 * else, return the address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nd;
	char *_str;
	int len;

	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
		return (NULL);

	_str = strdup(str);
	if (_str == NULL)
	{
		free(new_nd);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = _str;
	new->len = len;
	new->next = *head;

	*head = new_nd;

	return (new_nd);
}
