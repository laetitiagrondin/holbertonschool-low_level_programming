#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line
 * @n: number of elements
 * @a: pointer to the array of integers
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
}
