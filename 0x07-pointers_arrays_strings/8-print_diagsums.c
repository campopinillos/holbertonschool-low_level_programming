#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the diagonals of matrix
 * @a: First input origin
 * @size: Second input siza
 *
 * Description: Prints the sum of the diagonals of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i <= (size * size); i += size + 1)
		diag1 += a[i];
	for (i = size - 1; i <= (size * size) - 1 ; i += size - 1)
		diag2 += a[i];
	printf("%d, %d\n", diag1, diag2);
}
