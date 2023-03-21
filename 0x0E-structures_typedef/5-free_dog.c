#include "dog.h"

/**
 * free_dog - creates a new instance of dog
 * @d: dog type array
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		free(d);
}
