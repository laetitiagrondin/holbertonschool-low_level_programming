#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s : Pointer to the string to convert
 *
 * Return: the integer obtained from the string,
 * or 0 if no number is found
 */
int _atoi(char *s)
{
	int i;
	int len = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		while (s[i] != '\0' && (i >= '0' && i <= '9'))
		{
			_putchar(i);
			i++;
		}
	}
	return (0);
}
