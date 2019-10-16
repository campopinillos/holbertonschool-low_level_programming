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
 * _strconcat - Returns the length of a string
 * @s1: String first input
 * @s2: String second input
 *
 * Description: Returns the length of a string
 * Return: n value
 */
char *_strconcat(char *s1, char *s2)
{
	int i, j = 0;

	i = _strlen(s1);
	while (s2[j] != 0)
		s1[i++] = s2[j++];
	s1[i] = 0;
	return (s1);
}
/**
 * argstostr - Concatenates all the arguments
 * @ac: Firts input int width
 * @av: Secong input int height
 *
 * Description: Concatenates all the arguments
 * Return: 0 if it works
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, lenght = 1;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
		lenght += _strlen(av[i++]) + 1;
	str = malloc(lenght * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		_strconcat(str, av[i++]);
		_strconcat(str, "\n");
	}
	return (str);
}
