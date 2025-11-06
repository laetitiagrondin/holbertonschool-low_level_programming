#include "main.h"
/**
 * _is_prime - Checks recursively if n is prime
 * @n: the number to check
 * @i: current divisor
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int _is_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if ((n != 2 && n % 2 == 0) || n % i == 0)
	{
		return(0);
	}
	return (_is_prime(n, i + 1));
}

/**
 * is_prime_number - Check if n is a prime number
 * @n: the number to check
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (_is_prime(n, 3));
}
