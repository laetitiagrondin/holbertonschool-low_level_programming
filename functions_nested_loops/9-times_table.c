#include <unistd.h>
#include "main.h"
/**
 * times_table - Prints the 9 times table
 *
 * Description: This function prints the 9 times table, starting with 0.
 *
 * Return: The 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, pr;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			pr = i * j;
			if (j == 0)
				_putchar(pr + '0');
			else
				_putchar(',');
				_putchar(' ');
			if (pr < 10)
				_putchar(' ');
				_putchar(pr + '0');
			else
				_putchar(pr / 10 + '0');
				_putchar(pr % 10 + '0');
		_putchar('\n');
}
