#include "main.h"
/**
 * print_diagsums.c
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += *(a + i * size + i);
		s2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", s1, s2);
}
