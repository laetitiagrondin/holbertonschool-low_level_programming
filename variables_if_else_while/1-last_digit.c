#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Description: This function assigns a random number to variable n
 * and prints the last digit of n, with a message describing
 * if it's greater than 5, 0, or less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, x);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
