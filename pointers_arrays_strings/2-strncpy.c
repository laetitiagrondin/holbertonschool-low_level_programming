#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: pointer to the destination string where the content is appended
 * @src: pointer to the source string to be appended to dest
 * @n: number of bytes
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < n && src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
