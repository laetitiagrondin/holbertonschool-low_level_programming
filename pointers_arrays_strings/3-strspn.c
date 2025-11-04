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
	unsigned int i, j, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
		if (n == 0)
		{
			return (i);
		}
	}
	return (i);
}
