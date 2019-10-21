#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees dogs structure
 * @d:  struct dog to be initialized
 *
 * Description: Frees dogs structure
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
