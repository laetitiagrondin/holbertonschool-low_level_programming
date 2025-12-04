#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - Prints a list of elements
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes, or [0] (nil) if str is NULL
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", (unsigned long)strlen(h->str), h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
