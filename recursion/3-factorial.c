#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: number to calculate factorial
 *
 * Return: The factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n = 0)
	{
		return (0);
	}
	factorial(n * (n - 1));
}
