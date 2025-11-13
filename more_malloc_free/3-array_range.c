#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: Pointer to the newly created array
 * NULL if min > max or if malloc fails
 *
 */
int *array_range(int min, int max)
{
	char *ptr;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (ptr);
}
