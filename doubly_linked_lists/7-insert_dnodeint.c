#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint - Inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added (starts at 0)
 * @n: integer to store in the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0 || *h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	for (i = 0; (i < idx - 1) && (current->next != NULL); i++)
		current = current->next;
	if (i < idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
