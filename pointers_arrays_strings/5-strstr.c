#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, m;
	
	if (needle[0] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		m = i;
		j = 0;
		while (needle[j] != '\0' && haystack[m] == needle[j])
		{
			m++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
