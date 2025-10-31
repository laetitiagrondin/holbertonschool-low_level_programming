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
	int i = 0;
	int j = 0;
	int len = 0;
	int res = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}
	if (s[i] < '0' || s[i] > '9')
	{
		return (0);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			j = s[i] - '0';
			res = res * 10 + j;
		}
	}
	return (res);
}
