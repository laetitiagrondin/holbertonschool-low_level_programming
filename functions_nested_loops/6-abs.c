#include <stdio.h>
#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @i: The integer whose absolute value is to be calculated
 *
 * Description: This function computes the absolute value of an integer.
 *
 * Return: The absolute value of an integer
 */
int _abs(int i)
{
	if (i >= 0)
		return i;
	else
		return -i;
}
