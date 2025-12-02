#ifndef LISTS_H
#define LISTS_H

/**
 * struct lists - A node in a singly linked list
 * @str: pointer to char stored in the node
 * @head: a pointer to the first node in the list
 * @new: a pointer to another node
 * @n: the number of nodes
 */

struct lists
{
	char *str;
	struct lists *head;
	struct lists *new;
	size_t n;
};

typedef struct lists lists_t

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
