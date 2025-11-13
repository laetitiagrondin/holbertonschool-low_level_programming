#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: number of elements of the array
 * @size: size of each element in bytes
 *
 * Return: Pointer to the allocated memory, set to 0
 * NULL if nmemb or size is 0, or if mallocs fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (p);
}
