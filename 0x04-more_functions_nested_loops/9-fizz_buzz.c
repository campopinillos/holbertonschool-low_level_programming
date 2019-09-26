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
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n < 100)
		{
			if ((n % 3 == 0) && (n % 5 == 0))
				printf("FizzBuzz");
			else if (n % 3 == 0)
				printf("Fizz");
			else if (n % 5 == 0)
				printf("Buzz");
			else
				printf("%d", n);
			printf(" ");
		}
		else
		{
			if ((n % 3 == 0) && (n % 5 == 0))
				printf("FizzBuzz");
			else if (n % 3 == 0)
				printf("Fizz");
			else if (n % 5 == 0)
				printf("Buzz");
			else
				printf("%d", n);
		}
	}
	printf("\n");
	return (0);
}
