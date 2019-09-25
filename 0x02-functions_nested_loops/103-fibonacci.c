#include <stdio.h>
/**
 * main - This print all multiples of 5 and 3 of 1024
 * @void: The evaluated input
 *
 * Description: computes & prints the sum of all the multiples of 3, 5 of  1024
 * Return: 0 Value if it works
 */
int main(void)
{
	long int x = 0, y = 1, z, w, sum;

	for (w = 0; w < 50; w++)
	{
		z = x + y;
		x = y;
		y = z;
		if ((y >= 2) && (y < 4000000) && (y % 2 == 0))
			sum += y;
	}
	printf("%li\n", sum);
	return (0);
}
