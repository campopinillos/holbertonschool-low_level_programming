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
 * string_nconcat - Concatenates two strings
 * @s1: Firts input char pointer
 * @s2: Second input char pointer
 * @n: n bytes of s2
 *
 * Description: Concatenates two strings
 * Return: Empty value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int s2_len, len;
	int i, j = 0, lenght, max;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s2_len = _strlen(s2);
	len = (n > s2_len) ? s2_len : n;
	lenght = _strlen(s1) + len + 1;
	string = malloc(lenght * sizeof(char));
	if (string == NULL)
		return (NULL);
	_strcpy(string, s1);
	i = _strlen(s1);
	max = i + len;
	while (i < max && s2[j] != 0)
		string[i++] = s2[j++];
	string[i] = 0;
	return (string);
}
