#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @s: the string to modify
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 ||
				((s[i - 1] < 'a' || s[i - 1] > 'z') &&
				(s[i - 1] < 'A' || s[i - 1] > 'Z') &&
				(s[i - 1] < '0' || s[i - 1] > '9') &&
				(s[i - 1] != '-')))
			{
				s[i] -= 'a' - 'A';
			}
		}
		i++;
	}
	return (s);
}
