#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the opcodes
 * @argc: Amount of inputs
 * @argv: Char pointer of arguments
 *
 * Description: Prints the opcodes of
 * its own main function
 * Return: O if it works
 */
int main(int argc, char **argv)
{
	int i = 0, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < bytes)
	{
		printf("%02hhx", *((char *) (main + i)));
		if (bytes > i + 1)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
