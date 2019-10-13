#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 * @argc: Firts input int argument
 * @argv: Second input char argument of string
 *
 * Description: Multiplies two numbers
 * Return: 0 if it works
 */
int main(int argc, char *argv[])
{
	int value1, value2, mult;

	if (argc == 3)
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		mult = value1 * value2;
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
