#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_dlistint - Frees a dlistint list
 * @head: pointer to the head of the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
