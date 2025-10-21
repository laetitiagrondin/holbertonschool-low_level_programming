#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z', n++);
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'Z', n++);
	{
		putchar(n);
		putchar('\n')
	}
	return (0);
}
