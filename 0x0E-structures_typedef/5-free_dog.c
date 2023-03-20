#include "dog.h"

/**
 * free_dog - creates a new instance of dog
 * @d: dog type array
 */
void free_dog(dog_t *d)
{
	free(d);
}
