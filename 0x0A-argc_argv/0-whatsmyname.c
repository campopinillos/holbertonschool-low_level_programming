#include <stdio.h>
/**
 * main - Prints its name
 * @argc: Firts input int argument
 * @argv: Second input char argument of string
 *
 * Description: Prints its name followed by a new line
 * Return: 0 if it works
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
