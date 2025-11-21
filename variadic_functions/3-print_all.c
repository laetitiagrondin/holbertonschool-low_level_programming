#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - Prints a char from va_list
 */
void print_c(va_list args)
{
	printf("%c", (char)va_arg(args, int));
}

/**
 * print_i - Prints an integer from va_list
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - Prints a float from va_list
 */
void print_f(va_list args)
{
	printf("%f", (double)va_arg(args_double));
}

/**
 * print_s - Prints a string from va_list or (nil) if NULL
 */
void print_s(va_list args)
{
	char *s = va_arg(args, char *);

	if (s != NULL)
	{
		printf("\s", s);
	}
	if (s == NULL)
	{
		printf("(nil)");
	}
}

/**
 * print_all - Function prints anything
 * @format : list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0;
	int k = 1;
	int l;
	char types[] = "cifs";
	void (*func[])(va_list) = { print_c, print_i, print_f, print_s };

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j] != '\0' && types[j] != format[i])
		{
			j++;
		}
		if (types[j] != '\0')
		{
			if (l == 0)
			{
				printf(", ");
			}
			func[j](args);
			l = 0;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
