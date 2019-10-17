#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * lcount - Frees memory allocation
 * @string: Firts input char pointer
 *
 * Description: Counts the amount of letters
 * Return: Number of letters to reserve
 */
int lcount(char *string)
{
	int i = 0, n = 0;

	while (string[i] != 0)
	{
		if (*string == ' ')
			string++;
		else
		{
			while (string[i] != ' ' && string[i] != 0)
				string++;
			n++;
		}
		i++;
	}
	return (n);
}

/**
 * strtow - Splits a string into words
 * @str: Firts input string
 *
 * Description: Splits a string into words
 * Return: 0 if it works
 */
char **strtow(char *str)
{
	char **string, *s;
	int i = 0, j = 0, lenght = 0, word_len = 0;

	if (str == 0 || *str == 0)
		return (NULL);
	lenght = lcount(str) + 1;
	string = malloc(lenght * sizeof(char *));
	if (string == 0)
		return (NULL);
	while (i < lenght && str != 0)
	{
		if (*str == ' ')
			str++;
		else
		{
			s = str;
			while (*str != ' ' && *str != 0)
				word_len++, str++;
			string[i] = malloc((word_len + 1) * sizeof(char));
			if (string[i] == 0)
			{
				while (i > 0)
					free(string[i--]);
				free(string);
				return (NULL);
			}
			while ( *s != ' ' && *s != 0)
			{
				string[i][j] = *s;
				s++, j++;
			}
			string[i][j] = 0;
			i++, str++, j = 0, word_len = 0;
		}
	}
	return (string);
}
