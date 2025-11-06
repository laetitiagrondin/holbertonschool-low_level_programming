#include "main.h"
/**
 * _sqrt_recursive - Recursive function to find the natural square root
 * @n: the number whose square root we want to find
 * @i: the current number being tested to be the square root of n
 *
 * Return: The natural square root of n if it exists, otherwise -1
 */
int _sqrt_recursive(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_recursive(n, i + 1));
}

/**
 * _sqrt_recursion - main function to call the recursive function
 * @n: the number whose square root we want to find
 *
 * Return; The natural square root of n if it exists, otherwise -1
 */
int _sqrt_recursive(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursive(n, 0));
}
