#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @i: The integer from which we want to extract the last digit
 *
 * Description: This function prints the last digit of a number.
 *
 * Return: The value of the last digit
 */
int print_last_digit(int i)
{
	int last_digit = i % 10;

	printf("Last digit of %d is %d and is ", i, last_digit);
	return last_digit;
}
