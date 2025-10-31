#include <ctype.h>
#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @char: a pointer to the string to be modified
 *
 * Return: The modified string with all uppercase letters
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = toupper(str[i]);
	}
	return str;
}
