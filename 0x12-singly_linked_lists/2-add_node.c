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
	size_t i;

	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
		return (NULL);

	new_nd->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new_nd->len = i;
	new_nd->next = *head;
	*head = new_nd;

	return (*head);
}
