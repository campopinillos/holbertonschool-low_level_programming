#include <stdio.h>
/**
 * main - Fizz-Buzz test
 * @void: Parameter of times
 *
 * Description: Print Fizz-Buzz
 * Return: 0 Value if it works
 */
int main(void)
{
	int x = 2;
	long int prime, num = 612852475143;

	prime = num;
	while (prime > 1)
	{
		if ((prime % x) == 0)
		{
			prime /= x;
		}
		else
		{
			x++;
		}
	}
	printf("%d\n", x);
	return (0);
}
