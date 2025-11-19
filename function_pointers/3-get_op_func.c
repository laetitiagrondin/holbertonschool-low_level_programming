#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - Returns a pointer
 * to the function corresponding to an operator
 * @s: the operator as a string
 *
 * Return: A pointer to the function associated with the operator,
 * or NULL if the opertor is invalid
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
