#include <string.h>
#include "main.h"
/**
 * puts_half - Prints half of a string, followed by a new line
 * @str:
 *
 */
void puts_half(char *str)
{
	int n, i;
	int len = 0;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
