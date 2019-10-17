#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array
 * @nmemb: Firts input int pointer
 * @size: Second input int pointer
 *
 * Description: Allocates memory for an array
 * Return: string concated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == 0)
		return (NULL);
	while (str[i] != 0)
		str[i++] = 0;
	return (str);
}
