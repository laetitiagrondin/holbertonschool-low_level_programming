#include "main.h"
/**
 * reset_to_98 - Takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: pointer towards an integer
 */
void reset_to_98(int *n)
{
	int p;

	p = 98;
	n = &p;
	_putchar(n);
}
