#include <stddef.h>
#include "lists.h"
/**
 * list_len - Length of a list
 * @h: pointer to the head of the list
 *
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t nbelt = 0;

	while (h != NULL)
	{
		nbelt++;
		h = h->next;
	}
	return (nbelt);
}
