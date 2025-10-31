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
			if (i == 0 || s[i - 1] < 'a' || s[i - 1] > 'z')
			{
				s[i] -= 'a' - 'A';
			}
		}
		i++;
	}
	return s;
}
