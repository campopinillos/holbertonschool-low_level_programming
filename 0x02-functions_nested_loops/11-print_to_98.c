#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Prints the secuence from n to 98
 * @n: The evaluated input
 *
 * Description: Prints the secuence from n to 98
 * Return: 0 Value if it works
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d ,", n);
		n--;
	}
	printf("%d\n", n);
}
