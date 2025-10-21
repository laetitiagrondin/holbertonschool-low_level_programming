#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: This function prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Alway 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
