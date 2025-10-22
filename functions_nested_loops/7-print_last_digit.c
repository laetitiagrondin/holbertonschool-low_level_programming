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

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
