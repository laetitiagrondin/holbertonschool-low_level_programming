#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated espace
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string,
 * or NULL if str is NULL or memory allocation fails
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		len++;
		i++
	}
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i]
	}
	dup[i] = '\0';
	return (dup);
}
