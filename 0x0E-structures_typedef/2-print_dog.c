#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints a struct dog
 * @d: Pointer structure
 *
 * Description: Prints a struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if ((*d).name)
			printf("%s\n", (*d).name);
		else
			printf("%p\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: ");
		if ((*d).owner)
			printf("%s\n", (*d).owner);
		else
			printf("%p\n", (*d).owner);
	}
}
