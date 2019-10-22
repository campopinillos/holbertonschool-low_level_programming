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
	dog_t *dog;
	int i = 0;
	char *nam, *own;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[i] != 0)
		i++;
	nam = malloc(sizeof(char) * (i + 1));
	if (nam  == NULL)
	{
		free(dog);
		return (NULL);
	}
	i = 0;
	while (owner[i] != 0)
		i++;
	own = malloc(sizeof(char) * (i + 1));
	if (own == NULL)
	{
		free(nam);
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != 0; i++)
		nam[i] = name[i];
	nam[i] = 0;
	for (i = 0; owner[i] != 0; i++)
		own[i] = owner[i];
	own[i] = 0;
	dog->name = nam;
	dog->age = age;
	dog->owner = own;
	return (dog);
}
