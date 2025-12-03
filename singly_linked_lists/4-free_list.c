#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_list - Frees a list_t list
 * @head: Pointer to the first node of the list
 *
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
