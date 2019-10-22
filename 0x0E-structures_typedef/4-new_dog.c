#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog
 * @name: String name
 * @age: Int age
 * @owner: String owner
 *
 * Description: Creates a new dog
 * Return: The new dog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i = 0;
	char *new, *own;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	while (name[i] != 0)
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (new  == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	i = 0;
	while (owner[i] != 0)
		i++;
	own = malloc(sizeof(char) * (i + 1));
	if (own == NULL)
	{
		free(new);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i] != 0; i++)
		new[i] = name[i];
	new[i] = 0;
	for (i = 0; owner[i] != 0; i++)
		own[i] = owner[i];
	own[i] = 0;
	new_dog->name = new;
	new_dog->age = age;
	new_dog->owner = own;

	return (new_dog);
}
