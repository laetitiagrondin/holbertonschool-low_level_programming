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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
