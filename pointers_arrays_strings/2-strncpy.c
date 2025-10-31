#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: pointer to the destination string where the content is appended
 * @src: pointer to the source string to be appended to dest
 * @n: number of bytes
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpt(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
