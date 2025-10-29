#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: a pointer to the string whose length is to be calculated
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
