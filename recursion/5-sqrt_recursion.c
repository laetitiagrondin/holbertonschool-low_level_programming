#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: the integer to find the square root of
 *
 * Return: The natural square root or -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, 0));
}
