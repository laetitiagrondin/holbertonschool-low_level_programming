#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers passed as arguments
 * @argc: number of arguments passed to the program
 * @argv: array of strings representing the arguments
 *
 * Return: 0 if the program runs successfully, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0, argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return(0);
}
