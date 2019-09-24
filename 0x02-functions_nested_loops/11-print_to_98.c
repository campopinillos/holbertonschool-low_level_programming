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
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	printf("98\n");
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	printf("98\n");
	}
	else
	{
		printf("98\n");
	}
}
