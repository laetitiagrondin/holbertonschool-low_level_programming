#include <stddef.h>
#include "lists.h"
/**
 * get_dnodeint - Returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of a list
 * @index: index of the node, starting from 0
 *
 * Return: A pointer to the node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
