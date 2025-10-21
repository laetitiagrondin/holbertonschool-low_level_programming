#include <unistd.h>
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
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n')
	return (0);
}
