#include "dog.h"

/**
 * init_dog - initializes pointer variable of type dog
 * @d: initalized var
 * @name:  name of dog
 * @age: age of dog
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
