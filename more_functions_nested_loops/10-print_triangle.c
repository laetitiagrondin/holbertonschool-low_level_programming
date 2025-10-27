#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size: the size of the triangle
 *
 * Return: Void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size -1; j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
