#include <stdio.h>
/**
 * main - Prints the number of arguments passed into the program
 * @argc: number of arguments
 * array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		argv[i];
	}
	printf("%d\n", argc - 1);
	return (0);
}
