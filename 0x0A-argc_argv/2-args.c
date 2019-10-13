#include <stdio.h>
/**
 * main - Prints all arguments it receives
 * @argc: Firts input int argument
 * @argv: Second input char argument of string.
 *
 * Description: Prints all arguments it receives
 * Return: 0 if it works
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
