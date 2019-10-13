#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers
 * @argc: Firts input int argument
 * @argv: Second input char argument of string
 *
 * Description: Adds positive numbers
 * Return: 0 if it works
 */
int main(int argc, char *argv[])
{
	int i = 0, change = 0, money, resid;
	int coins[5] = {25, 10, 5, 2, 1};

	money = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 2)
	{
		if (money <= 0)
		{
			printf("0\n");
			return (1);
		}
		while (i < 5 && money != 0)
		{
			resid = money / coins[i];
			money -= resid * coins[i];
			change += resid;
			i++;
		}
	}
	printf("%d\n", change);
	return (0);
}
