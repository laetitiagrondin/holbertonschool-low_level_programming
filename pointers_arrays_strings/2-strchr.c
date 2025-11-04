#include "main.h"
/**
 * strchr - Locates a character in a string
 * @s: pointer to the string
 * @c: character in the string to be found
 *
 * Return: A pointer to the first occurence
 * of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0', i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
