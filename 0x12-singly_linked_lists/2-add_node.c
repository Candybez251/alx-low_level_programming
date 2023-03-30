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
	list_t *new_node;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
