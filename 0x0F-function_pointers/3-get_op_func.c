#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - Selects the correct operator
 * @s: First int input
 *
 * Description: Selects the correct function
 * to perform the operation
 * Return: The sum of the input parameters
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
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0] && !s[1])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
