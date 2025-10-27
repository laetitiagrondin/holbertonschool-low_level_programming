#include <stdio.h>
#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: character to check
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
