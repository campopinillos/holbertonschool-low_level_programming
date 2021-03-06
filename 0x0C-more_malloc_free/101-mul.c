#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
int _isdigit(char *s);
/**
 * main - prints all arguments received.
 * @argc: First input int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, rt error
 */
int main(int argc, char **argv)
{
	char *result = NULL;
	int partial_result = 0, len_n1, len_n2, i, j, carry, len;
	int num1, num2, k = 0, left_shift = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error");
		exit(98);
	}
	len_n1 = _strlen(argv[1]);
	len_n2 = _strlen(argv[2]);

	result = malloc(sizeof(char) * (len_n1 + len_n2 + 1));
	for (i = len_n1 - 1; i >= 0; i--)
	{
		carry = 0;
		num1 = argv[1][i] - '0';
		k = left_shift;
		for (j = len_n2 - 1; j >= 0; j--)
		{
			num2 = argv[2][j] - '0';
			partial_result =  (num1 * num2) + carry;
			if (result[k])
				partial_result += result[k] - '0';
			carry = partial_result / 10;
			result[k++] = (partial_result % 10) + '0';
		}
		if (carry > 0)
			result[k] = carry + '0';
		left_shift++;
	}
	i = 0;
	while (result[i] == '0' && result[i] != '\0')
	{
		if (result[i] == '0' && result[i + 1] == '\0')
		{
			free(result);
			_putchar('0');
			_putchar('\n');
			return (0);
		}
		i++;
	}
	len = _strlen(result);
	for (i = len - 1; i >= 0; i--)
		_putchar(result[i]);
	_putchar('\n');
	free(result);
	return (0);
}
/**
 * _strlen - Returns the length of a string
 * @s: The evaluated input
 *
 * Description: Returns the length of a string
 * Return: n value
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
/**
 * _isdigit - Check if a string just have digits
 * @s: String to check
 *
 * Return: 1 if just have digits
 * 0 if have any other character
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
