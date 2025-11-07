#include <stdio.h>
/**
 * main - prints all program arguments including its name
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != NULL; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
