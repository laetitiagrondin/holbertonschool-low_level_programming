#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @s: the string to be encoded
 *
 * Return: The encoded string
i */
char *leet(char *s)
{
	int i, j;
	char numb[] = {'4', '3', '0', '7', '1'};
	char lett[] = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (str[i] == lett[i])
			{
				str[i] = numb[j / 2];
			}
		}
	}
	return str;
}
