#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - Prints a list of elements
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes, or [0] (nil) if str is NULL
 */
size_t print_list(const list_t *h)
{
	while (h->str != NULL)
	{
		if (str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
