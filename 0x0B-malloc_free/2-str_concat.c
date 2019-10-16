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
 * str_concat - Concatenates two strings
 * @s1: Firts input char pointer argument
 * @s2: Secong input char pointer argument
 *
 * Description: Concatenates two strings
 * Return: 0 if it works
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int i, j = 0, lenght;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lenght = _strlen(s1) + _strlen(s2) + 1;
	string = malloc(lenght * sizeof(char));
	if (string == NULL)
		return (NULL);
	_strcpy(string, s1);
	i = _strlen(s1);
	while (s2[j] != 0 && i < lenght)
		string[i++] = s2[j++];
	string[i] = 0;
	return (string);
}
