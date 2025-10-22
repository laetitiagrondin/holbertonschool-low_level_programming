#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Description: This function checks for lowercase character.
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
