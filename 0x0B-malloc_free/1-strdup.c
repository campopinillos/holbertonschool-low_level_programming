#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	string = malloc(strlen(str) + 1);
	if (string == NULL)
		return (NULL);
	strcpy(string, str);
	return (string);
}
