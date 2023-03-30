#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - free a linked list
 * @head: a pointer to the list_t
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
