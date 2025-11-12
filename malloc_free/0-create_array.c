#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char
 * @size: array size
 * @c: initialization character
 *
 * Return: NULL if size equals 0, or if it fails
 * or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
