#include <stdio.h>
/**
 * main - Print the largest prime factor of the number
 * @void: Parameter of times
 *
 * Description: Print the largest prime factor of the number
 * Return: 0 Value if it works
 */
int main(void)
{
	int prime = 2;
	long int result, num = 612852475143;

	result = num;
	while (result > 1)
	{
		if ((result % prime) == 0)
		{
			result /= prime;
		}
		else
		{
			prime++;
		}
	}
	printf("%d\n", prime);
	return (0);
}
