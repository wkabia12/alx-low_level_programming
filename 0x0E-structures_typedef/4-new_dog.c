#include "dog.h"

/**
 * new_dog - creates a new instance of dog
 * @name:  name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: ptr of type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(name) + (sizeof(age) / sizeof(float)) + sizeof(owner));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
