#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function prints the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;
	for (n = 'a'; n <= 'z', n++)
	{
		if (n != 'q' && n != 'e')
			putchar(n);
	}
	putchar('\n');
	return (0);
}
