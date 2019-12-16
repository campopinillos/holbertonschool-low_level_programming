#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer
 * @s: String
 *
 * Description: Convert a string to an integer
 * Return: n value
 */
int _atoi(char *s)
{
	int number, sign = 0, lenght = 0;
	unsigned int n = 0;

	while (s[lenght] != '\0')
	{
		if (s[lenght] == '-')
		{
			sign++;
		}
		if (s[lenght] >= '0' && s[lenght] <= '9')
		{
			n = 10 * n + (s[lenght] - '0');
			if (s[lenght + 1] < '0' || s[lenght + 1] > '9')
				break;
		}
		lenght++;
	}
	if (sign % 2 != 0)
		number = n * -1;
	else
		number = n;
	return (number);
}
