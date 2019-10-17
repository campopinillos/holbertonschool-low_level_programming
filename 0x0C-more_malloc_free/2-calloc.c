#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array
 * @nmemb: Firts input int pointer
 * @size: Second input int pointer
 *
 * Description: Allocates memory for an array
 * Return: Memori string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		exit(0);
	str = (void *) malloc(nmemb * size);
	if (str == 0)
		exit(0);
	while (i < nmemb * size)
		str[i++] = 0;
	return (str);
}
