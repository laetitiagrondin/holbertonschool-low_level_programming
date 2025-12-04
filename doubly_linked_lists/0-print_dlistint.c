#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nb = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nb++;
		h = h->next;
	}
	return (nb);
}
