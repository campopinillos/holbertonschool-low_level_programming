#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: The evaluated input
 * @n: The print lentght input
 *
 * Description: Prints n elements of an array of integers
 * Return: n value
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", *(a + x));
		if (a[x] != '\0' && x < n - 1)
			printf(", ");
	x++;
	}
	printf("\n");
}
