#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Firts input int argument
 *
 * Description: Allocates memory using malloc
 * Return: Empty value
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = (void *) malloc(b);
	
	if (ptr)
		return(ptr);
	else
		exit (98);
}
