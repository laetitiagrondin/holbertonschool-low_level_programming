#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i <= 9)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar((i / 10) + (i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
