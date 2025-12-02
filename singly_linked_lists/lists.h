#ifndef LISTS_H
#define LISTS_H

/**
 * struct lists - A node in a singly linked list
 * @str: pointer to char stored in the node
 * @h: a pointer to the first node in the list
 * @next: a pointer to the next node
 * @n: the number of nodes
 */

struct lists
{
	char *str;
	struct lists *h;
	struct lists *next;
	size_t n;
};

typedef struct lists lists_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
