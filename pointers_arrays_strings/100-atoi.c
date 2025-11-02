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
	int res = 0;
	int sign = 1;
	int in_number = 0;
	
	while (s[i] != '\0' && (in_number == 0 || (s[i] >= '0' && s[i] <= '9')))
	{
		if (s[i] == '-' && in_number == 0)
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + (s[i] - '0');
			in_number = 1;
		}
		i++;
	}
	return (res * sign);
}
