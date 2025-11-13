#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: Pointer to the newly allocated concatened string,
 * or NULL if the allocation fails
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int a = 0;
	unsigned int b = 0;

	while (s1 != NULL && s1[a] != '\0')
	{
		a++;
	}
	while (s2 != NULL && s2[b] != '\0')
	{
		b++;
	}
	if (n >= b)
	{
		n = s2;
	}
	ptr = malloc(a + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < a)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
