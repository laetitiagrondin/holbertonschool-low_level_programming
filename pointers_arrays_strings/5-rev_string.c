#include "main.h"
/**
 * rev_string - Reverses a string
 */
void rev_string(char *s)
{
	int i, len = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for  (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
