#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: double pointer to the beginning of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		len++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
