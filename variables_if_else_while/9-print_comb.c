#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function prints all possible combinations
 * of single-digit numbers,
 * separated by ", " in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	while (x <= 9)
	{
		putchar(x + '0');
	}
		if (x != 9)
	{
		putchar(',');
		putchar(' ');
	}
		x++;
	return (0);
}
