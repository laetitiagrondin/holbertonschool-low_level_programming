
/**
 * main - Entry point
 *
 * Description: This function prints all the numbers of base 16,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char x;

	for (n = '0'; n = '9'; n++)
	{
		putchar(n);
	}
	for (x = 'a'; x = 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
