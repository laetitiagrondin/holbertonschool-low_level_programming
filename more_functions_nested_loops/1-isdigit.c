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
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
