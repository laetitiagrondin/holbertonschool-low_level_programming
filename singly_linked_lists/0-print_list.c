#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - Prints a list of elements
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	size_t len;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			len = 0;
			while (h->str[len] != '\0')
			{
				len++;
			}
			printf("[%lu] %s\n", (unsigned long)len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
