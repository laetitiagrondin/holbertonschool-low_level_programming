#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index index
 * of a dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL)
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	free(current);
	return (-1);
}
