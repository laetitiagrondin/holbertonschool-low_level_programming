#include <string.h>
#include "main.h"
/**
 * puts_half - Prints half of a string, followed by a new line
 * @str:
 *
 */
void puts_half(char *str)
{
	int n;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
