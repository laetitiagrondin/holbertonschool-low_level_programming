#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: Always 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = argv[1];
	num2 = argv[2];
	res = num1 * num2;
	printf("%d\n", res);
	return (0);
}
