#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
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

	while (s[n] != 0)
		n++;
	return (n);
}

/**
 * _strcpy - Copies the string pointed to by src
 * @dest: Destination
 * @src: Source
 *
 * Description: Copies the string pointed to by src
 * Return: n value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/**
 * _strdup - Returns a pointer to a newly allocated
 * @str: Firts input int argument
 *
 * Description: Returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a
 * parameter.
 * Return: 0 if it works
 */
char *_strdup(char *str)
{
	char *string;

	if (str == NULL)
		return (NULL);
	string = malloc(_strlen(str) + 1);
	if (string == NULL)
		return (NULL);
	_strcpy(string, str);
	return (string);
}
