#include <stdio.h>
/**
 * main - This print firts 100 Fibonacci numbers
 * @void: The evaluated input
 *
 * Description: Prints the 100 first Fibonacci numbers
 * Return: 0 Value if it works
 */
int main(void)
{
	long unsigned int x = 0, y = 1, z, w;

	for (w = 0; w < 100; w++)
	{
		z = x + y;
		x = y;
		y = z;
		if (w < 99)
			printf("%lu, ", z);
		else
			printf("%lu\n", z);
	}
	return (0);
}
