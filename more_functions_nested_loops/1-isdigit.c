#include <stdio.h>
#include "main.h"
/**
 * isdigit - Checks for a digit ( 0 through 9 )
 * @c: character to check
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	last_digit = c % 10;

	if (last_digit >= 0 && last_digit < 10)
		return (1);
	return (0);
}
