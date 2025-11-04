#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: a pointer to the string
 * @accept: string containing  the accepted characters
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from acept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' &&
				s[i] != accept[j]; j++);
		{
			if (accept[j] == '\0')
			{
				return(i);
			}
		}
	}
	return(i);
}
