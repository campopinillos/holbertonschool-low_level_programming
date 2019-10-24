#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Return a operation between a and b
 * @argc: First int input
 * @argv: Second int input
 *
 * Description: Return a operation between a and b
 * Return: The int result
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char *operator;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (num2 == 0 && (operator[0] == '/' || operator[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	op_func = get_op_func(operator);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	calc = op_func(num1, num2);
	printf("%d\n", calc);
	return (0);
}
