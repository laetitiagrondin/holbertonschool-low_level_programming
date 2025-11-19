#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: the first integer
 * @b: the seconde integer
 *
 * Return: The resultof the addition of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substracts two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: The result of the substraction of b from a
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplieq two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: The result of multiplying a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: the numerator
 * @b: the denominator
 *
 * Return: The result of dividing a by b.
 * Exits the program with status 100 if b is 0.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of two integers
 * @a: the numerator
 * @b: the denominator
 *
 * Return: The remainder of dividing a by b.
 * Exits the program with status 100 if b is 0.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
