#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - Prints a char from va_list
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
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
	printf("%f", va_arg(args, double));
}

/**
 * print_s - Prints a string from va_list or (nil) if NULL
 */
void print_s(va_list args)
{
	char *s = va_arg(args, char *);
	char *arr[2];

	arr[0] = "(nil)";
	arr[1] = s;
	printf("%s", arr[s != NULL]);
}

/**
 * print_all - Function prints anything
 * @format : list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0;
	int k;
	int v = 0;
	char types[] = {'c', 'i', 'f', 's', '\0'};
	void (*func[])(va_list) = { print_c, print_i, print_f, print_s };

	va_start(args, format);
	while (format != NULL && format[j] != '\0')
	{
		k = 0;
		while (types[k] != '\0' && types[k] != format[j])
		{
			k++;
		}
		if (types[k] == format[j])
		{
			if (v == 1)
			{
				printf(", ");
			}
			func[k](args);
			v = 1;
		}
		j++;
	}
	va_end(args);
	printf("\n");
}
