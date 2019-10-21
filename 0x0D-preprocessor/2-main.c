#include <stdio.h>
/**
 * main - Prints the name of the file it was compiled from
 * @void: Empty argument
 *
 * Description: Prints the name of the file it was compiled from
 * Return: 0 if it works
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
