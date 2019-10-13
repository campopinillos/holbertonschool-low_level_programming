#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it
 * @argc: Firts input int argument
 * @argv: Second input char argument of string
 *
 * Description: Prints the number of arguments passed into it
 * Return: 0 if it works
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
