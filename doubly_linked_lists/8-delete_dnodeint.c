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

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current = *head;
	for (i = 0; i < index && current; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (current->prev)
	{
		current->prev->next = current->next;
	}
	else
	{
		*head = current->next;
	}
	if (current->next)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
